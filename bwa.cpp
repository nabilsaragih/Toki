#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[101];
    while (scanf("%d", &a[n]) != EOF) {
        n++;
    }
    for (int i = n-1; i >= 0; i--) {
        printf("%d\n", a[i]);
    }
}