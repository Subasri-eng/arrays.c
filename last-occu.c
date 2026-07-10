#include<stdio.h>
int main(){
    int i,n,pos=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int num;
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            pos=i;
        }
    }
    if(pos!=-1){
        for(i=pos;i<n-1;i++){
            a[i]=a[i+1];
        }
    }
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
}