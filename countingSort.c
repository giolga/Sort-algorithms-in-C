#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arrA[n+1], arrC[n+1];
    int mx = INT_MIN;

    for(int i = 1; i <= n; i++) {
        scanf("%d", &arrA[i]);
        mx = (mx < arrA[i]) ? arrA[i] : mx;
    }

    int b[mx + 1];
    for(int i = 0; i <= mx; i++) {
        b[i] = 0;
    }

    for(int i = 1; i <= n; i++) {
        b[arrA[i]]++;
    }

    for(int i = 1; i <= mx; i++) {
        b[i] = b[i] + b[i-1];
    }

    for(int i = n; i > 0; i--) {
        arrC[b[arrA[i]]] = arrA[i];
        b[arrA[i]]--;
    }

    for(int i = 1; i <= n; i++) {
        printf("%d ", arrC[i]);
    }

    return 0;
}
