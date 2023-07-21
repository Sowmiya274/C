#include<stdio.h>
#include<stdlib.h>

void create();
void insertFront();
void insertEnd();
void insertMiddle();
void deleteEnd();
void deleteFront();
void deleteMiddle();
void display();
void exit();
void count();
int value;
int pos;

struct node
{
    int data;
    struct node *next,*prev;

}*temp,*head,*tail,*new;

void main()
{
int ch;

while(1)
{
    printf("\n 1.Create\n 2.insertFront\n 3.insertEnd\n 4.insertMiddle \n 5.deleteFront \n 6.deleteEnd \n 7.deleteMiddle \n 8.display\n 9.exit\n 10.count ");
    printf("\nEnter your choice: \n");
    scanf("%d",&ch);

switch(ch)
{
    case 1:
     create();
     display();
     break;
    case 2:
    insertFront();
    display();
    break;
    case 3:
    insertEnd();
    display();
    break;
    case 4:
    insertMiddle();
    display();
    break;
    case 5:
    deleteFront();
    display();
    break;
    case 6:
    deleteEnd();
    display();
    break;
    case 7:
    deleteMiddle();
    display();
    break;
    case 8:
    display();
    break;
    case 9:
     exit(0);
    break;
    case 10:
        count();
        break;
}
}
}
void create()
{
    int n;
    printf("enter no.of elements in the list :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
new=(struct node*)malloc(sizeof(struct node));
scanf("%d",&value);
new->data=value;
new->next=NULL;
new->prev=NULL;

if(head==NULL)
{
   head=new;
   tail=new;

}
else
{
    tail->next=new;
    new->prev=tail;
    tail=new;
}
}
}
void insertEnd()
{
printf("\nEnter element to insert at End :");
scanf("%d",&value);
new=(struct node*)malloc(sizeof(struct node));
new->data=value;

new->next=NULL;
tail->next=new;
new->prev=tail;
tail=new;
}
void insertFront()
{
printf("\nEnter element to insert at Front:");
scanf("%d",&value);
new=(struct node*)malloc(sizeof(struct node));
new->data=value;
new->prev=NULL;
new->next=head;
head->prev=new;
head=new;
}
void insertMiddle()
{

    printf("\nEnter position :");
    scanf("%d",&pos);
printf("\nEnter element to insert at Middle:");
scanf("%d",&value);

new=(struct node*)malloc(sizeof(struct node));
new->data=value;
temp=head;
for(int i=0;i<pos-1;i++)
{
    temp=temp->next;
}
new->next=temp->next;
temp->next=new;

new->prev=temp;
}
void deleteEnd()
{
temp=tail;
tail=temp->prev;
tail->prev=NULL;
tail=temp;
}
void deleteFront()
{
temp=head;
temp=temp->next;
temp->prev=NULL;
head=temp;
}
void deleteMiddle()
{


}
void deleteend(){




}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
