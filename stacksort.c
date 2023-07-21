#include<stdio.h>
#define size 5
int arr[size],top=-1,arr1[size],top1=-1;
void push(int x)
{
   top++;
   arr[top]=x;

}
void pop()
{
    int b=arr[top];
    top1++;
    arr1[top1]=b;
    top--;
}
void pop1()
{
    int a=arr1[top1];
    top++;
    arr[top]=a;
    top1--;
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    for(int i=0;i<size;i++)
    {
        int data;
        printf("Enter the data");
        scanf("%d",&data);
        if(top==-1)
        {
            push(data);
        }
        else if(arr[top]<data )
        {
            if(top1==-1)
            {
                push(data);
            }
            else
            {
                if(data<arr1[top1])
                {
                    push(data);
                }
                else
                {
                    while(arr1[top1]<data && top1!=-1)
                    {
                       pop1();
                    }

                    push(data);
                }
            }
        }

        else if(arr[top]>data)
        {
            while(arr[top]>data)
            {
               pop();
            }
            push(data);

        }

    }
    display();


}
