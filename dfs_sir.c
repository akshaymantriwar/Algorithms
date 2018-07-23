#include<stdio.h>
int time=0;
 int adj[20][20],info[20][4],n,i,j,k,c=0;
char vertices[20];
void DFS_VISIT(int adj[20][20],int u){
int i;
time=time+1;
info[u][1]=time;
info[u][0]=6000;

for(i=0;i<n;i++){
   if(adj[u][i]==1){
     if(info[i][0]==5000){
       info[i][3]=u;
       DFS_VISIT(adj,i);
      }
    }
  }
printf("%c\n",vertices[u]);
  info[u][0]=7000;
 time=time+1;
 info[u][2]=time;
}


void main(){
scanf("%d",&n);
for(i=0;i<n;i++){  //get the adj matrix
   for(j=0;j<n;j++){
   scanf("%d",&adj[i][j]);
}
}
   
 scanf("%s",&vertices); //get the name of vertices

 for(i=0;i<n;i++){  //info consist of color ,distance
   info[i][0]=5000; //for white color use 5000 value
   info[i][1]=0;
   info[i][2]=0;
   info[i][3]=0;
   }
printf("result:\n");
for(i=0;i<n;i++){
    if(info[i][0]==5000){
      DFS_VISIT(adj,i);
     }
  }
}



