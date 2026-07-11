#include<stdio.h>
int main(){
    int i=0,j=0,k=0,n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]<0){
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
        printf("%d",b[i]);
        printf("\n");
    for(i=0;i<k;i++)
    printf("%d",c[i]);

}