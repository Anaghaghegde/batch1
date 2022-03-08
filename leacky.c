#include<stdio.h>
void main()
{
 int incoming,outgoing,buffer_size,n,store=0,d;
 printf("Enter No of Packet:\n");
 scanf("%d",&n);
 printf("enter Buffer Size");
 scanf("%d",&buffer_size);
 printf("Enter the Out going value");
 scanf("%d",&outgoing);
 while(n!=0)
 {
  printf("\n enter incoming packet:\n");
  scanf("%d",&incoming);
  if(incoming<=(buffer_size-store))
  {
   store+=incoming;  
   printf("\n incoming value: %d\n store packet value is: %d\n",incoming,store);
  }
  else
   {
    d=incoming-(buffer_size-store);
    printf("dropped packet are:%d\n",d);
    store=buffer_size;
   }
   store=store-outgoing;
   printf("stored values are:%d\n",store);
   n--;
  }
 }
   
