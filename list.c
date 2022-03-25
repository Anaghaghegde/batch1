#include<stdio.h>
#include<stdlib.h>
typedef struct node * listptr;
struct node
 {
  int data;
  listptr link;
 };
listptr first=NULL;
listptr getnode()
{
listptr ptr;
 ptr=(listptr)malloc(sizeof(struct node));
return ptr;
}

void insertBegin(int ele)
{
 listptr new;
 new=getnode();
 new->data=ele;
 new->link=NULL;
  if(first!=NULL)
   {
      new->link=first;
  }
     first=new;
   
}

void insertEnd(int ele)
{
 listptr new,temp;
 new=getnode();
 new->data=ele;
 new->link=NULL;
  if(first==NULL)
first=new;
else
   {
  temp=first;
  while(temp->link!=NULL)
   temp=temp->link; 
   temp->link=new; 
  }
}

void deleteBegin()
{
 listptr temp;
if(first==NULL)
 {
  printf("\nList is empty");
 exit(0);
}
temp=first;
first=first->link;
free(temp);
}

void deleteEnd()
{
 listptr temp,prev;
 temp=first;
if(first==NULL)
 {
  printf("\nList is empty");
 }
 else if(first->link==NULL)
 first=NULL;
 else
 while(temp->link!=NULL)
{
 prev=temp;
 temp=temp->link;
}
prev->link=NULL;
free(temp);
}



void display()
{
listptr temp;
if(first==NULL)
 {
  printf("list is empty");
   exit(0);
 }
temp=first;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\t",temp->data);
}

void main()
{
 int opt=1,ch,ele;
  while(opt)
   {
     printf("\n1.Insert Begin\n2.Insert End\n3.Delete Begin\n4.Delete End\n5.Display\n");
     printf("\nEnetr your choice");
     scanf("%d",&ch);
      switch(ch)
        {
          case 1:printf("Insert the elements");
                 scanf("%d",&ele);
          	insertBegin(ele);
            	break;
          case 2:printf("Insert the elements");
                 scanf("%d",&ele);
          	insertEnd(ele);
            	break;
          case 3: deleteBegin();
                break;
         case 4: deleteEnd();
                break;
  	  case 5: display();
           	break;
	}
 printf("Do you want to continue?(0/1)");
 scanf("%d",&opt);
   }

}

