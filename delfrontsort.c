#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*head,*temp,*new,*temp1;
int main(){
    create();
    display();
    deletefront();
    sort();
    display();
}
void create()
{
    int n,i;
    printf("enter count: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
    }
}

void display()
{
    //int count=0;
     temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        //count++;
    }
}

void deletefront()
{
    temp=head;
    printf("\n%d\n",temp->data);
    temp=temp->next;
    head=temp;
}

void sort()
{
   temp=head;

while(temp!=NULL)
{
    temp1=temp->next;
while(temp1!=NULL)
{


       if((temp->data)>(temp1->data))
       {
           int a=temp->data;
           temp->data=temp1->data;
           temp1->data=a;
       }
       temp1=temp1->next;
}
temp=temp->next;
}
}

