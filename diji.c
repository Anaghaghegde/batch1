#include<stdio.h>
#include<stdlib.h>
int n,d[10],p[10],cost[6][6];
void diji(int src)
{
  int i,j,u,v,min;
  int s[10];
  for(i=0;i<n;i++)
  {
   d[i]=cost[src][i];
   s[i]=0;
   p[i]=src;
  }
  s[src]=1;
  for(i=1;i<n;i++)
  {
   min=99;
   u=-1;
   for(j=0;j<n;j++)
    {
     if(s[j]==0)
     {
      if(d[i]<min)
       {
        min=d[j];
        u=j;
       }
     }
    }
    if(u==-1)
    return;
    s[u]=1;
    for(v=0;v<n;v++)
    {
    if(s[v]==0)
    {
     if(d[u]+cost[u][v]<d[v])
      {
       d[v]=d[u]+cost[u][v];
       p[v]=u;
      }
     }
     }
   }
 }
 
 void print_matrix(int n)
 {
  int i,j;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    printf("%d\t",cost[i][j]);
   }
  printf("\n");
 }
}
  void print_path(int src,int dest)
  int i;
  i=dest;
   while(i!=src)
     {
      printf("%d<--",i);
      i=p[i];
     }
     printf("%d=%d",i,d[dest]);
 }
 
 void main()
 {
  int src,i,j;
  printf("enter the number of vertices:\t");
  scanf("%d",&n);
  printf("enter the cost adjecency matrix\n");
   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
     scanf("%d",&cost[i][j]);
    printf("cost adjecency matrix\n");
    print_matrix(n);
   printf("Enter the source vertx:\t");
   scanf("%d",&src);
   diji(src);
   printf("the shortest path and distance:\n")
   for(i=0;i<n;i++)
   { 
     if(d[i]!=99)
     print_path(src,i);
     else
     printf("not reacheble from %d to %d",src,i);
     printf("\n");
   }
 }
 
 
 
