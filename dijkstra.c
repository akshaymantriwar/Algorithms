//Code by AkshayKumar Prakash Mantriwar TY CSE A-DIV

#include<stdio.h>
void main(){
int adj[20][20],n,i,j,c=0,d=0,S[20],sindex=0,Q[20],min=999;
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

c=n;

while(c!=0){
for(i=0;i<n;i++){      //finding minimum one
          if(min>Q[i]){
              min=Q[i];
              j=i;            
           }
     }
min=999;
c--;
  for(i=0;i<n;i++){
    
     if(adj[j][i]!=0){
       Q[i]=Q[j]+adj[j][i]; //relax...updating
     }
  }
for(i=0;i<n;i++){
adj[j][i]=0;
}
S[sindex]=Q[j];                //insert it into S
Q1[sindex]=vertices[j];
Q[j]=999;                       //delete it from Q
sindex++;
for(i=0;i<n;i++){
printf("%d\t",Q[i]);
}
printf("\n");
}
for(i=0;i<sindex;i++){
printf("%c\t%d\n",Q1[i],S[i]);  // printing vertices with distance
}
}



