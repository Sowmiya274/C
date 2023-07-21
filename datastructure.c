#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}
*head,*temp,*newnode;
void find();
int main()
{
    int n,i=0;
    printf("enter the size of node:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data value");
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
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    int element;
    int count=0;
     printf("enter the element to search:");
     scanf("%d",&element);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==element)
        {
            count++;

        }
    temp=temp->next;
    }
    if(count==1){
        printf("found");
    }
    else{
        printf("not found");
    }
    return 0;
}

