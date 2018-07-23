#include<stdio.h>
void main(){
  int adj[20][20],min,set[20],u=0,v=0,edges=1,value=0,i,j,n;
char vertices[20];
 
scanf("%d",&n);
for(i=0;i<n;i++){ 
            set[i]=0; //get the adj matrix
   for(j=0;j<n;j++){
   scanf("%d",&adj[i][j]);
    if(adj[i][j]==0){
        adj[i][j]=999;
    }
}
}
  while(edges < n){     //in spanning tree n-1 edges...
    min=999;
  for(i=0;i<n;i++){       //finding minimum one
     for(j=0;j<n;j++){
      if(adj[i][j]<min){
       min=adj[i][j]; 
       u=i;
       v=j; 
    }
  }}
  while(set[u]!=0){u=set[u];} //check the loop i.e from same set
  while(set[v]!=0){v=set[v];} 
  if(v!=u){   //the loop is not there then...
  edges++;
  value+=min;
  set[v]=u;
  }
   adj[u][v]=adj[v][u]=999; 
  }   
printf("%d\n",value);
}







