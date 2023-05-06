#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i == 2) {
            cout << "YA" << endl;
        } else {
            if ((int)pow(2, i - 1) % i == 1) {
                cout << "YA" << endl;
            } else {
                cout << "BUKAN" << endl;
            }
        }
    }
}