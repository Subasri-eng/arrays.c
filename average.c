#include<stdio.h>
int main(){
int i,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int sum =0;
for(i=0;i<n;i++){
sum=sum+a[i];
}
float average = sum/n;
printf("%.2f",average);
return 0;
}