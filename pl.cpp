#include <bits/stdc++.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            printf("* ");
        } else {
            printf("%d ", i);
        }
    }
}