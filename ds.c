#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}
*head,*temp,*newnode;
int main()
{
    int n,i,count=0;
    printf("enter count: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
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
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
            count++;
        }
        printf("\n%d",count);
    return 0;
}








mport java.io.*;
import java.util.*;
  
// Driver code
public class Main {
  
    public static void main(String[] args)
    {
        int[] arr = { 7, 4, 8, 8, 8, 9 };
        int k = 6;
        int ans = getMinDiff(arr, arr.length, k);
        System.out.println(ans);
    }
  
    // User function Template for Java
    public static int getMinDiff(int[] arr, int n, int k)
    {
  
        Arrays.sort(arr);
        // Maximum possible height difference
        int ans = arr[n - 1] - arr[0];
  
        int tempmin, tempmax;
        tempmin = arr[0];
        tempmax = arr[n - 1];
  
        for (int i = 1; i < n; i++) {
  
            // if on subtracting k we got negative then
            // continue
            if (arr[i] - k < 0)
                continue;
  
            // Minimum element when we add k to whole array
            tempmin = Math.min(arr[0] + k, arr[i] - k);
  
            // Maximum element when we subtract k from whole
            // array
            tempmax
                = Math.max(arr[i - 1] + k, arr[n - 1] - k);
            ans = Math.min(ans, tempmax - tempmin);
        }
        return ans;
    }
}