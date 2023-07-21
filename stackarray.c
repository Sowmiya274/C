#include<stdio.h>
#include<stdlib.h>
int stack[100],top,element;
void push();
void pop();
void peek();
void display();
int main(){
    int option;
    while(1){
       printf("stack using array....\n");
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
   // int n,size,element,top=-1;
    //scanf("%d",&n);
  int n;
  printf("enter count: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
       // newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        if(top==size-1){
            printf("overflow");
        }
        else{
            printf("enter the element");
            scanf("%d\n",&element);
            top++;
            stack[top]=element;
        }
  }}
void pop(){
      if(top==-1){
        printf("stack is underflow");
      }
      else{
            element=stack[top];
     top--;
        printf("%d\n",element);
      }
}
void peek(){
     printf("%d\n",stack[top]);
  }
  void display(){
      printf("the elements are:\n");
      int i;
      for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
       }
  }

