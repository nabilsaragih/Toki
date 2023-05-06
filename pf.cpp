#include <bits/stdc++.h>

int main() {
    int i, j;
    scanf("%d", &i);
    for (j = 1; j <= i; j++) {
        if (i % j == 0) {
            printf("%d\n", i/j);
        }
    }
}