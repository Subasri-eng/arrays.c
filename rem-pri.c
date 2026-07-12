#include<stdio.h>

int main() {
    int i, j, n, prime;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        if(a[i] < 2) {
            printf("%d ", a[i]);
            continue;
        }
        prime = 1;
        for(j = 2; j <= a[i] / 2; j++) {
            if(a[i] % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime == 0) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}