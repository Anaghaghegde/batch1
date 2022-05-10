#include<stdio.h>
#include<stdlib.h>

int n,d[10],p[10];
int cost[5][5]={{ 0,99,99,7,99}
                { 3,0,4,99,99}
                {99,99,0,99,6}
                {99,2,5,0,99}
                {99,99,99,4,0}}


void main()
{
 int n;
 printf("Number of vertices");
 scanf("%d",&n);
 printf("Enetr the cost adjecency matrix");
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
     printf("%d\t",cost[i][j]);
    }
}
}
