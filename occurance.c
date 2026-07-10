#include<stdio.h>
int main(){
    int i,j,n,product=1,count=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int num;
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            count++;
            sum+=a[i];
            product*=a[i];
        }
    }
    if(count>0){
        printf("%d %d %d",count,sum,product);
    }
    else{
        printf("Not Found");
    }
}