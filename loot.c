#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
     struct node*next;
}*head,*temp,*newnode;
int main(){
     int i,n;
     printf("enter the size:");
     scanf("%d",&n);
     for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
     }
     temp=head;
     while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
     }
   /* int count=0;
    while(temp!=NULL){
       // printf("%d\n",temp->data);
        temp=temp->next;
        count++;
        printf("%d",count);
    }*/

   printf("%d",temp->data);
}

