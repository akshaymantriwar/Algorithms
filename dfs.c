#include<stdio.h>
void main(){
  int adj[20][20],info[20][3],n,i,j,k,c=0,d=0;
char vertices[20];
 
int stack[n],top=0,u;
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
   }
 info[0][0]=6000;//for gray color use 6000 value //here i am considering starting point as 'a'
 info[0][1]=0;

stack[top]=0; //push
top=top+1;
printf("result\n"); 
for(j=0;j<n;j++){
   c=0; 
   d=0;
   u=stack[top-1];          //that instance predecesor
  for(i=0;i<n;i++){
     c++;
     if(adj[u][i]==1&&info[i][0]==5000){
       info[i][0]=6000;
       info[i][1]=info[u][1]+1;
       stack[top]=i; //pop
       top=top+1;
       d++;
       break;
     }
  }
if(c==n&&d==0){                   //back tracking mechanisms 
printf("%c\n",vertices[stack[top-1]]);//print the element 
top=top-1;
}
}
top=top-1;
while(top!=-1){              //print all remainning stack elements
printf("%c\n",vertices[stack[top]]);
top=top-1;
}
}



