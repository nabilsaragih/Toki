#include <bits/stdc++.h>

int main() {
    int n, j;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &j);
        sum += j;
    }
    printf("%d\n", sum);
}