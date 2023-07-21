#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node*next;
}
*head,*temp,*newnode;
void create();
void display();
int main(){
int option;
    while(1)
    {
        printf("\n\n**circular Linked List**\n\n");
        printf("1.create\n");
        printf("2.Display\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
void create()
{
    int n,i;
    printf("enter count: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}

void display()
{
    int count=0;
     temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
}
void reverse(){
do{

}
}
