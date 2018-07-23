#include<stdio.h>

int knasack(int W,int wt[20],int val[],int n){
int i,w;
int k[n+1][w+1];
for(i=0;i<=n;i++){
   for(w=0;w<=W;w++){
   if(i==0 || w==0){
    k[i][w]=0;
  }
  else if(w <= wt[i-1]){
  k[i][w]=max(val[i-1]+knapsack(W,wt,val,w-wt[i-1]),k[i-1][w]);
  }
  else{
  k[i][w]=k[i-1][w];
  }
 } 
}
return k[n][w];
}

void main(){
int W=7,wt[]={2,3,4,5},val[]={3,7,2,9},n=4;
printf("%d",knapsack(W,wt,val,n));
}
