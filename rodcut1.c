#include<stdio.h>
int max(int a,int b){
if(a>b)
return a;
return b;
}

int cut_rod(int p[],int n){
int i,q=-9999;
if(n<=0){
return 0;
}

for(i=0;i<n;i++){
q=max(q,p[i]+cut_rod(p,n-i-1));

}
return q;
}
void main(){
int p[]={2,5,7,8},n,m;
n=4;
m=cut_rod(p,n);
printf("%d",m);
}
