#include<stdio.h>
int main(){
int i,n,count=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
if(a[i]<0){
printf("%d ",a[i]);
count=1;
}
}
if(count == 0)
 printf("All positive numbers");
}