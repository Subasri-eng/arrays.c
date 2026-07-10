#include<stdio.h>
int main(){
    int i,n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i==1||i==n-1||i==n-2){
          sum+=a[i];
            
        }
    
    }
    printf("%d",sum);
}