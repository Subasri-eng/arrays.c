#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(a[i]!=target){
            printf("%d",a[i]);
        }
    }
}