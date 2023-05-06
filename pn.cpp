#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        bool isPrime = true;
        cin >> x;
        if (x == 1) {
            isPrime = false;
        } else {
            for (int j = 2; j*j <= x; j++) {
                if (x % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        (isPrime) ? cout << "YA" << endl : cout << "BUKAN" << endl;
    }
}