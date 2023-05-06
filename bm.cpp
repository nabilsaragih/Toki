#include <bits/stdc++.h>
using namespace std;

int main() {
    int f[1001] = {0};
    int n, x, m = 0, mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        f[x]++;
    }
    for (int i = 1; i <= 1000; i++) {
        if (f[i] >= mx) {
            mx = f[i];
            m = i;
        }
    }
    cout << m << endl;
}