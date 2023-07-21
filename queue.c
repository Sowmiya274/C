#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*temp,*front=NULL,*newnode,*rear=NULL;
void enqueue();
void dequeue();
void peek();
void display();
int main(){
    int option;
    while(1){
       printf("stack using linked list....\n");
       printf("1.enqueue\n");
       printf("2.dequeue\n");
        printf("3.peek\n");
        printf("4.display\n");
        scanf("%d",&option);
         switch(option){
         case 1:
            enqueue();
            break;
         case 2:
            dequeue();
             break;
         case 3:
            peek();
            break;
         case 4:
            display();
            break;
         }
    }
}
void enqueue()
{
    int n,i;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*) malloc (sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(front==NULL && rear==NULL)
        {
            front=newnode;
            rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }
        //temp=newnode;
    }

}
void dequeue()
{
    temp=front;
    if(front==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("Top element %d is deleted!\n",front->data);
        front=front->next;
        free(temp);
    }
}
void peek()
{
    printf("%d\n",front->data);
}
void display()
{
    temp=front;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

