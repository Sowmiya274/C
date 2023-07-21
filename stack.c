#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}
*top=NULL,*newnode,*temp;
void push();
void pop();
void peek();
void display();
int main(){
    int option;
    while(1){
       printf("stack using linked list....\n");
       printf("1.push\n");
       printf("2.pop\n");
        printf("3.peek\n");
        printf("4.display\n");
        scanf("%d",&option);
         switch(option){
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
         }
    }
}
void push(){
    int n;
  printf("enter count: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=top;
        top=newnode;
  }}
void pop(){
      temp=top;
      if(top==NULL){
        printf("stack is empty");
      }
      else{
     printf("%d\n",top->data);
     top=top->next;
     free(temp);

      }
}
void peek(){
    temp=top;
     if(top==NULL){
        printf("stack is empty");
     }
     else{
        printf("%d display the element:",top->data);
     }
  }
  void display(){
       temp=top;
       while(top!=NULL){
        printf("%d ",top->data);
        top=top->next;
       }
  }
