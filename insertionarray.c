#include<stdio.h>
int main(){
int arr[20]={1,2,3,4,5};
int i,pos,n=5,ele;
printf("element before insertion:\n");
for(i=0;i<n;i++)
    printf("%d\n",arr[i]);

ele=6;
pos=2;
n++;
for(int i=n-1;i>=pos;i--)
    arr[i]=arr[i-1];
    arr[pos-1]=ele;
printf("element after insertion:\n");
for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
}
