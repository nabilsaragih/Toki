#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, c;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        c = 0;
        cin >> x;
        for (int j = 2; j*j <= x; j++) {
            if (x % j == 0) {
                c++;
                if (x / j != j) {
                    c++;
                }
            }
        }
    (c <= 2) ? cout << "YA" << endl : cout << "BUKAN" << endl;
    }
}