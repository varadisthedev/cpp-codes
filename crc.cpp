#include <iostream>
#include <string>
using namespace std;

const string DELIMITER = "0111110";
const string POLY = "1011";

// XOR operation for CRC
string xorOperation(string a, string b)
{
    string result = "";
    for (int i = 0; i < b.length(); i++)
    {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}

// CRC calculation
string calculateCRC(string data)
{
    string dividend = data + "000"; // Append 3 zeros (poly length - 1)
    string divisor = POLY;

    for (int i = 0; i <= dividend.length() - divisor.length(); i++)
    {
        if (dividend[i] == '1')
        {
            string temp = dividend.substr(i, divisor.length());
            string xorResult = xorOperation(temp, divisor);
            for (int j = 0; j < xorResult.length(); j++)
            {
                dividend[i + j] = xorResult[j];
            }
        }
    }

    return dividend.substr(dividend.length() - 3);
}

string bitStuffing(string data)
{
    string stuffed = "";
    int count = 0;

    for (char bit : data)
    {
        if (bit == '1')
        {
            count++;
            stuffed += bit;
            if (count == 5)
            {
                stuffed += '0';
                count = 0;
            }
        }
        else
        {
            count = 0;
            stuffed += bit;
        }
    }

    return stuffed;
}

string bitDestuffing(string data)
{
    string destuffed = "";
    int count = 0;

    for (int i = 0; i < data.length(); i++)
    {
        if (data[i] == '1')
        {
            count++;
            destuffed += data[i];
            if (count == 5 && i + 1 < data.length() && data[i + 1] == '0')
            {
                i++;
                count = 0;
            }
        }
        else
        {
            count = 0;
            destuffed += data[i];
        }
    }

    return destuffed;
}

// Sender side
void sender(string message)
{
    cout << "\n=== SENDER SIDE ===" << endl;
    cout << "Original message: " << message << endl;

    string crc = calculateCRC(message);
    string messageWithCRC = message + crc;
    cout << "CRC: " << crc << endl;
    cout << "Message with CRC: " << messageWithCRC << endl;

    string stuffed = bitStuffing(messageWithCRC);
    cout << "After bit stuffing: " << stuffed << endl;
    string frame = DELIMITER + stuffed + DELIMITER;
    cout << "Transmitted frame: " << frame << endl;
}

void receiver(string frame)
{
    cout << "\n=== RECEIVER SIDE ===" << endl;
    cout << "Received frame: " << frame << endl;

    string data = frame.substr(DELIMITER.length(),
                               frame.length() - 2 * DELIMITER.length());
    cout << "After removing delimiters: " << data << endl;

    string destuffed = bitDestuffing(data);
    cout << "After bit destuffing: " << destuffed << endl;

    string receivedMessage = destuffed.substr(0, destuffed.length() - 3);
    string receivedCRC = destuffed.substr(destuffed.length() - 3);

    cout << "Received message: " << receivedMessage << endl;
    cout << "Received CRC: " << receivedCRC << endl;

    string calculatedCRC = calculateCRC(receivedMessage);
    cout << "Calculated CRC: " << calculatedCRC << endl;

    if (calculatedCRC == receivedCRC)
    {
        cout << "\n✓ Message received correctly!" << endl;
    }
    else
    {
        cout << "\n✗ Error detected in transmission!" << endl;
    }
}

int main()
{
    string message;

    cout << "8-bit Message Communication System" << endl;
    cout << "Generator Polynomial: " << POLY << " (x³ + x + 1)" << endl;
    cout << "Frame Delimiter: " << DELIMITER << endl;
    cout << "==============================" << endl;

    cout << "\nEnter 8-bit binary message: ";
    cin >> message;

    if (message.length() != 8 || message.find_first_not_of("01") != string::npos)
    {
        cout << "Invalid input! Please enter exactly 8 bits (0s and 1s)." << endl;
        return 1;
    }

    sender(message);
    string frame = DELIMITER + bitStuffing(message + calculateCRC(message)) + DELIMITER;
    receiver(frame);

    return 0;
}