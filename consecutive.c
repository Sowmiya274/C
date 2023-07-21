#include <stdio.h>
int main()
{
    int n,a[10],temp;
printf("enter the size of an array");
scanf("%d",&n);
printf("enter the array elements");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("This ranges from %d to %d \n",a[0],a[n-1]);

}
