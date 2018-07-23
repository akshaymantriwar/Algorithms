#include<stdio.h>
void main(){
int a[50],i,j,n,temp;
printf("enter the no. of the elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=1;i<n;i++){
j=i-1;
temp=a[i];
while(j>0 && temp<a[j]){
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
for(i=0;i<n;i++){
printf("%d",a[i]);
}
}
