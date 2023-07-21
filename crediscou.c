#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}
*head,*temp,*newnode;

void create();
void display();
void count();
void insertfront();
void insertend();
void insertmid();
void exit();
void deletefront();
void deleteend();
int main()
{
    int option;
    while(1)
    {
        printf("\n\n**Singly Linked List**\n\n");
        printf("1.create\n");
        printf("2.Display\n");
        printf("3.Count\n");
        printf("4.insertfront\n");
        printf("5.insertend\n");
        printf("6.insertmid\n");
        printf("7.Exit\n");
        printf("8.deletefron\n");
        printf("9.deleteend\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            count();
            break;
        case 4:
            insertfront();
            break;
        case 5:
            insertend();
            break;
        case 6:
            insertmid();
            break;
        case 7:
            exit(0);
            break;
        case 8:
            deletefront();
            break;
        case 9:
            deleteend();
            break;
        }
    }
}

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

void count()
{
    int count=0;
     temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("\n%d",count);
}
void insertfront()
{
    newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",newnode->data);
        newnode->next=head;
        head=newnode;
        printf("node inserted");
    }
void insertend(){
          newnode=(struct node *)malloc(sizeof(struct node));
          printf("enter the data to be inserted:");
          scanf("%d",&newnode->data);
          newnode->next=NULL;
          temp=head;
          while(temp->next!=NULL){
            temp=temp->next;
          }
          temp->next=newnode;
}
void insertmid(){
    int pos,k;
   newnode=(struct node *)malloc(sizeof(struct node));
   scanf("%d",&newnode->data);
   scanf("%d",&pos);
   temp=head;
   for(k=1;k<pos;k++){
    temp=temp->next;
    newnode->next=temp->next;
    temp->next=newnode;

   }
}
void deletefront(){
      temp=head;
      if(temp->next==NULL)
      {
          printf("no elements in the list");
          head=NULL;
      }
      else
        head=temp->next;
      temp->next=NULL;
      free(temp);
}
void deleteend(){
      temp=head;
       newnode->next=NULL;
          temp=head;
          while(temp->next==NULL){
            temp=temp->next;
          }
          temp->next=newnode;
}


}

