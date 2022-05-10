#include<stdio.h>
#include<stdlib.h>

int n=5,d[10],p[10];
int cost[5][5]={{0,99,99,7,99},
                {3,0,4,99,99},
                {99,99,0,99,6},
                {99,2,5,0,99},
                {99,99,99,4,0}};
void dijik(int source)
{
 int i,j,u,v,min,s[10];
 for(i=0;i<n;i++)
 {
  d[i]=cost[source][i];
  s[i]=0;
  p[i]=source;
 }
 s[source]=1;
 for(i=1;i<n;i++)
 {
  min=99;
  u=-1;
   for(j=0;j<n;j++)
    {
     if(s[j]==0)
     {
      if(d[j]<min)
       {
        min=d[j];
        u=j;
       }
    }/*end of loop*/

 }/*dijik*/
 
 if(u==-1)#include<stdio.h>
#include<stdlib.h>
int n=5,p[10],d[10];
int cost[10][10]={{0,99,99,7,99},
		 {3,0,4,99,99},
		 {99,99,0,99,6},
		 {99,2,5,0,99},
		{99,99,99,4,0}};
void dijik(int source)
{
int i,j,min,u,v,s[10];
for(i=0;i<n;i++)
{
d[i]=cost[source][i];
s[i]=0;
p[i]=source;
}
s[source]=1;
for(i=1;i<n;i++)
{
min=99;
u=-1;
for(j=0;j<n;j++)
{
if(s[j]==0)
{
if(d[j]<min) //find min
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
}}//diji end
void print_path(int source,int destination)
{
int i;
i=destination;
while(i!=source)
{
printf("%d<--",i);
i=p[i];
}
printf("%d=%d",i,d[destination]);
}
void main()
{
int i,j,source;
printf("the cost adjecency:\n"); //read matrix
for(i=0;i<n;i++){
	for(j=0;j<n;j++)
printf("\t%d",cost[i][j]);
printf("\n"); 
}
printf("enter the source vertx:");
scanf("%d",&source);
dijik(source);
printf("the shortest path and distance is:\n");
for(j=0;j<n;j++)
{
if(d[j]==99)
printf("is not reachable from %d-->%d",source,j);
else
print_path(source,j);
printf("\n");
}
}
 return;
 s[u]=1;
 for(v=0;v<n;n++)
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
 void print_path(int source,int dest)
  {
   int i;
   i=dest;
   while(i!=source)
   {
    printf("%d<--",i);
    i=p[i];
   }
   printf("%d=%d",i,d[dest]);
  }

void main()
{
 int i,j,source;

 printf("Enetr the cost adjecency matrix");
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
     printf("%d\t",cost[i][j]);
    }
 printf("\n");
}
 printf("enter the source vertex\n");
scanf("%d",&source);
dijik(source);
printf("The shortest path and Distance\n");
 for(j=0;j<n;j++)
 {
 if(d[j]==99)
  printf("Is not reacheble from %d-->%d",source,j);
  else
 print_path(source,j);
 printf("\n");
 }
}
