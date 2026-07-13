#include<stdio.h>
int main(){
    int i,n,j=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(!(i%2==0 && a[i]%2==0)){
            b[j]=a[i];
        j++;
        } 
    }
    for(i=0;i<j;i++){
        printf("%d",b[i]);
    }
}