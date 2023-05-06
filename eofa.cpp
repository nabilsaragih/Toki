#include <bits/stdc++.h>

int main() {
    int a, d = 0;
    while (scanf("%d", &a) != EOF) {
        if (a >= 1 && a <= 1000) {
            d += a;
        }
    }
    printf("%d\n", d);
}