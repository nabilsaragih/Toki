#include <bits/stdc++.h>

int main() {
    int a, b;
    scanf("%d", &a);
    while(a % 2 == 0) {
        a /= 2;
    }

    if (a == 1) {
        printf("ya\n");
    } else {
        printf("bukan\n");
    }
}