#include <stdio.h>

int main()
{
    int n,i,j,a[10],temp;
printf("enter the size of an array");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("the peak element %d\n ",a[n-1]);

}
