#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate power modulo MOD
long long calculatePower(long long base, long long exponent) {
    long long result = 1;
    base = base % MOD;
    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % MOD;
        }
        exponent = exponent >> 1;
        base = (base * base) % MOD;
    }
    return result;
}

// Function to calculate sum of divisors to the power 69
long long sumOfDivisorsPower69(long long prime, long long exponent) {
    return (calculatePower(prime, exponent + 1) - 1) * calculatePower(prime - 1, MOD - 2) % MOD;
}

int main() {
    int n;
    cin >> n;

    long long result = 1;
    for (int i = 0; i < n; ++i) {
        long long x, k;
        cin >> x >> k;
        result = (result * sumOfDivisorsPower69(x, k)) % MOD;
    }

    cout << result << endl;

    return 0;
}
