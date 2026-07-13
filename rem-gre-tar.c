#include<stdio.h>
int main(){
int i,j=0,n;
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++) scanf("%d",&a[i]);
int num;
scanf("%d",&num);
for(i=0;i<n;i++){
if(a[i]<num){
b[j]=a[i];
j++;
}
}
for(i=0;i<j;i++) printf("%d ",b[i]);
}