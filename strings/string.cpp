#include <bits/stdc++.h>
using namespace std;
int main()
{
    // basic string declaration
    string s1 = "varad";
    string s2("raut");
    cout << s1 << " " << s2 << endl;

    // string input via cin, stops as space
    string s;
    cin >> s;
    cout << s;

    // input via getline()
    string sl;
    getline(cin, sl);
    cout << sl;
    return 0;
}