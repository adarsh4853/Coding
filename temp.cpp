#include <iostream>

using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        long long n, f, a, b;  // Number of messages, initial charge, consumption per unit, turn off/on cost
        cin >> n >> f >> a >> b;

        int msgs[n];  // Array to store message times
        for (int i = 0; i < n; i++) {
            cin >> msgs[i];
        }

        long long charge = f;  // Use long long to avoid potential overflow
        for (int i = 0; i < n; i++) {
            long long cost = 0;
            if (i > 0) {
                cost = (msgs[i] - msgs[i - 1]) * a;  // Calculate cost between messages
            }
            cost = min(cost, b);  // Determine cheaper option: stay on or turn off/on
            charge -= cost;
            if (charge <= 0) {
                cout << "NO" << endl;
                break;  // No need to continue if charge is already insufficient
            }
        }

        if (charge > 0) {
            cout << "YES" << endl;
        }
    }

    return 0;
}