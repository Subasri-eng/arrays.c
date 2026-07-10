#include<stdio.h>
int main(){
    int i,n,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int num;
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]%num==0){
            count++;
        }
    }
    if(count>0){
        printf("%d",count);
    }
    else{
                printf("Invalid Input");
    }
}