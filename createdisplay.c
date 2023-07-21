#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}
*head,*temp,*newnode;
void release();
int main()
{
    int n,result;
    printf("enter the size of node:");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
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
  void release(struct node **head)
{
    int key,p;
     printf("Enter key to search in the list: ");
    scanf("%d", &key);
    result = search(p, key);
    if (result)
    {
        printf("%d found in the list.\n", key);
    }
    else
    {
        printf("%d not found in the list.\n", key);
    }
    release(&p);
    struct node *temp = *head;
    *head = (*head)->next;
    while ((*head) != NULL)
    {
        free(temp);
        temp = *head;
        (*head) = (*head)->next;
    }
    return 0;
}}

