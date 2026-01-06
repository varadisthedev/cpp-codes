#include <bits/stdc++.h>
using namespace std;

const int LIMIT = 1000000000; // 1e9
const int SIEVE_LIMIT = LIMIT;

vector<bool> isPrime;

void generatePrimes()
{
    isPrime.assign(SIEVE_LIMIT + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (long long i = 2; i * i <= SIEVE_LIMIT; i++)
    {
        if (isPrime[i])
        {
            for (long long j = i * i; j <= SIEVE_LIMIT; j += i)
                isPrime[j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "Generating primes up to " << LIMIT << "...\n";
    generatePrimes();
    cout << "Prime table ready.\n";

    cout << "Checking Goldbach's Conjecture up to " << LIMIT << "...\n";

    for (long long n = 4; n <= LIMIT; n += 2)
    {
        bool ok = false;
        for (long long p = 2; p <= n / 2; p++)
        {
            if (isPrime[p] && isPrime[n - p])
            {
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            cout << "❌ Goldbach fails for: " << n << "\n";
            return 0;
        }
    }

    cout << "\n✅ Goldbach's conjecture holds for all even numbers up to " << LIMIT << "\n";
    return 0;
}
