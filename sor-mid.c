#include<stdio.h>

int main() {
    int i, j, n, temp;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    if(n % 2 == 0) {
        printf("%d %d", a[n/2 - 1], a[n/2]);
    }
    else {
        printf("%d", a[n/2]);
    }
    return 0;
}