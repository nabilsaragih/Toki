#include <bits/stdc++.h>

int main() {
    int n, x = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (x == 10) {
                x = 0;
            }
            printf("%d", x);
            x += 1;
        }
        printf("\n");
    }
}