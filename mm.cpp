#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p], c[n][p];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        for (int k = 0; k < p; k++) {
            cin >> b[j][k];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < p; k++) {
            c[i][k] = 0;
            for (int j = 0; j < m; j++) {
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < p; k++) {
            cout << c[i][k] << " ";
        }
        cout << "\n";
    }
}