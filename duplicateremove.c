#include<stdio.h>
#include<stdlib.h>

//creation of node
struct node{
int data;
struct node*next;
}*head,*new,*temp;

//declaration of functions/
void create(int n);
void display();
void removeDuplicate();

//creation of linked list/
void create(int n)
{
    int i;
    //printf("enter count: ");
    //scanf("%d",&n);
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
}}
//display of linked list
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

//Function to remove duplicate elements
void removeDuplicate(struct node* head)
{
    //declaration of variables
    struct node *ptr1, *ptr2, *dup;

    ptr1 = head;

    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;

        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data)
            {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                free(dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    printf("\nAfter removing duplicates:\n");
}


void main()
{
     int n;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    create(n);
    printf("The numbers are:\n");
    display();
removeDuplicate(head);

display();
}
