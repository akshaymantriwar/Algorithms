#include<stdio.h>
void main(){
  int adj[20][20],info[20][3],n,i,j,k;
char vertices[20];
 
int queue[n],front=0,rear=0,u;
scanf("%d",&n);
for(i=0;i<n;i++){  //get the adj matrix
   for(j=0;j<n;j++){
   scanf("%d",&adj[i][j]);
}
}
   
 scanf("%s",&vertices); //get the name of vertices

 for(i=0;i<n;i++){  //info consist of color ,distance,pre..
   info[i][0]=5000; //for white color use 5000 value
   info[i][1]=0;
   info[i][2]=0;
   }
 info[0][0]=6000;//for gray color use 6000 value //here i am considering starting point as 'a'
 info[0][1]=0;
 info[0][2]=0;

queue[rear]=0; //enqueue
rear=rear+1;
printf("result\n");


while(rear > front){
 
   u=queue[front];//dequeue
   front=front+1;
   printf("%c\n",vertices[u]);
   for(i=0;i<n;i++){
      if(adj[u][i]==1&&info[i][0]==5000){
        info[i][0]=6000;
        info[i][1]=info[u][1]+1;
        info[i][2]=u;
        queue[rear]=i;  //enqueue
        rear=rear+1;
       
       }
  }
info[u][0]=7000; //for black color use 7000 value
}
}


