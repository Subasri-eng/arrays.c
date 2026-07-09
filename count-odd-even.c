#include<stdio.h>
int main(){
    int i,n,count=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int odd_count=0,even_count=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("Even count: %d\n",even_count);
    printf("Odd count: %d\n",odd_count);
    return 0;
    
}