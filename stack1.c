#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*temp,*top=NULL,*newnode;
void push();
void pop();
void peek();
void display();
int main()
{
    int choice;
    do
    {

        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice: (");

        }
    }
    while(choice!=0);
}
void push()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*) malloc (sizeof(struct node));
        printf("Enter data to be inserted:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(top==NULL)
        {
            top=newnode;
        }
        else
        {
            newnode->next=top;
            top=newnode;
        }
        temp=newnode;
    }

}
void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element %d is deleted!\n",top->data);
        top=top->next;
        free(temp);
    }
}
void peek()
{
    printf("%d\n",top->data);
    //printf("\n");
}
void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d=>",temp->data);
        temp=temp->next;
    }
    printf("Null\n");
}
