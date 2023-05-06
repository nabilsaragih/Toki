#include <bits/stdc++.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (j == n - i) {
                for (int k = 0; k < i; k++) {
                    printf("*");
                }
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
}