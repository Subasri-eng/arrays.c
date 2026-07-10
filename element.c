#include<stdio.h>
int main(){
    int i,n,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int element;
    scanf("%d",&element);
    for(i=0;i<n;i++){
        if(a[i]==element){
            count++;
            break;

        }

    }
    if(count==1){
        printf("%d %d",element,i);
    }
    else{
        printf("Element not found");
    }
}