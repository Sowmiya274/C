#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
}
*head,*temp,*tail,*newnode;
int main(){
    int n;
    printf("enter the size of node:");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data value");
        scanf("%d",&newnode->data);
   newnode->data=newnode;
   newnode->next=NULL;
   if(head==NULL){
    head=newnode;
    tail=newnode;
   }
   else{
    tail->next=newnode;
    tail=newnode;
    tail->next=head;
   }}
    if(head==NULL)
    {
        printf("The list is empty");
        return;
    }
    temp = head;
    do{
        printf("\n%d",temp->data);
        temp=temp->next;
    }while(temp!=head);
}

