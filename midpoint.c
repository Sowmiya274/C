/*#include<stdio.h>
int main(){
     int a[100],n,ele;
     printf("enter the array size:");
     scanf("%d",&n);
     printf("enter the elements:");
     for(int i=0;i<n;i++)
        scanf("%d",&ele);
          // printf("The mid point is %d", a[n/2]);
     if(n%2==0)
       printf("%d,%d",a[n/2-1],a[n/2]);
   //printf("The mid point is %d", a[n/2]);
   else
    printf("%d",a[n/2]);
}*/
#include<stdio.h>
 int main()

{

int n,i;

scanf("%d",&n);

int a[n];

for(i=0;i<n;i++)

scanf("%d",&a[i]);

if(n%2==0)

printf("%d,%d",a[n/2-1],a[n/2]);

else

printf("%d",a[n/2]);

}


