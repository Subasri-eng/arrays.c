#include<stdio.h>

int main() {
    int i, j, n, count = 0;

    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements: ");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("%d ", a[i]);
                count++;
                break;
            }
        }
    }

    if(count == 0) {
        printf("No duplicate found");
    }

    return 0;
}