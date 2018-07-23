#include<stdio.h>

int min1(int a,int b){
if(a<b)
return a;
return b;
}


void main(){
int adj[20][20],n,i,j,c=0,d=0,S[20],min=999,D[20][20][20],P[20][20][20],k;
char vertices[20];
scanf("%d",&n);

for(i=0;i<n;i++){  //get the adj matrix
   for(j=0;j<n;j++){
   scanf("%d",&adj[i][j]);
}
}

for(i=0;i<n;i++){  
   for(j=0;j<n;j++){
   D[0][i][j]=adj[i][j];
}
}
scanf("%s",&vertices); //get the name of vertices

for(k=0;k<n;k++){
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        if(adj[i][j]<adj[i][k]+adj[k][j]){
           adj[i][j]=adj[i][j];
           P[k][i][j]=i;
}
        else{
           adj[i][j]=adj[i][k]+adj[k][j];
           P[k][i][j]=k;
         }
      }
   }
printf("\nD[%d]\n",k+1);
       printf("\n");
 for(i=0;i<n;i++){
       for(j=0;j<n;j++){
       printf("%d\t",adj[i][j]);
       }
       printf("\n");
       }
printf("\nP[%d]\n",k+1);
       printf("\n");
 for(i=0;i<n;i++){
       for(j=0;j<n;j++){
       printf("%d\t",P[k][i][j]);
       }
       printf("\n");
       }

}

}
