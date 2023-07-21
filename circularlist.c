#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;

}* newNode,*head, *tail,*temp;
void insert(int val)
{

    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode-> data= val;
    if(head==NULL)
    {
        newNode->next= NULL;
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail -> next = newNode;
        newNode-> next = head;
        head = newNode;
    }
}
void display(){
    temp = head;
   printf("\n%d",temp->data);
   temp=temp->next;
   while(temp!=head){
        printf("\n%d",temp->data);
        temp=temp->next;
   }
}

void delete()
{
    if(temp==NULL)
    {
        printf("List is empty");
        return;
    }
    struct node* del;
    if(temp -> next ==NULL)
    {
        del= temp;
        temp = NULL;
    }
    else
    {
        del = temp -> next;
        temp -> next  = temp -> next -> next;
    }
    printf("\n delete %d",del->data);
    free(del);
}
int main()
{
    int choice,val;
    while(1)
    {

        printf("\n 1.insert the element");
        printf("\n 2.delete the element");
        printf("\n 3.display");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value: ");
            scanf("%d",&val);
            insert(val);
            break;
        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        default:
            printf("wrong input");

        }
    }

    return 0;
}
