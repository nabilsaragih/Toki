#include <bits/stdc++.h>

int main() {
    int n, x, min, max;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (i == 0) {
            min = x;
            max = x;
        } else {
            if (x < min) {
                min = x;
            } 
            if (x > max) {
                max = x;
            }
        }
    }
    printf("%d %d\n", max, min);
}