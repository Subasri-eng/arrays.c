#include<stdio.h>
int main(){
int i,j,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++) scanf("%d",&a[i]);
int k;
scanf("%d",&k);
k=k%n;
for(i=0;i<k;i++){
int temp = a[0];
for(j=0;j<n-1;j++){
a[j]=a[j+1];
}
a[n-1] = temp;
}
for(i=0;i<n;i++) printf("%d ",a[i]);
}