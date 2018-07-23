//Code by AkshayKumar Prakash Mantriwar TY CSE A-DIV

#include<stdio.h>
void main(){
int adj[20][20],n,i,j,c=0,k,d=0,S[20],sindex=0,Q[20],min=999,counter=0;
char vertices[20],Q1[20];
scanf("%d",&n);

for(i=0;i<n;i++){  //get the adj matrix
   for(j=0;j<n;j++){
   scanf("%d",&adj[i][j]);
}
}
   
scanf("%s",&vertices); //get the name of vertices
for(i=0;i<n;i++){
Q[i]=999;
}
Q[0]=0;

c=1;

while(c < n ){ // n-1 times
c++;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
     if(adj[i][j]!=0){
       if(Q[j] > Q[i]+adj[i][j]){   //relax...updating
       Q[j] = Q[i]+adj[i][j]; 

       S[j]=i;
        }
     } 
   }
for(k=0;k<n;k++){
 printf("%c\t%d\n",vertices[k],Q[k]);
}
  }
 

}

  for(i=0;i<n;i++){   //nth time 
    for(j=0;j<n;j++){
     if(adj[i][j]!=0){
       if(Q[j]>Q[i]+adj[i][j]){   
       printf("found a neg cycle\n");
        }
     }
  
  }}

 for(i=0;i<n;i++){
 printf("%c\t%d\n",vertices[i],Q[i]);
}

}



