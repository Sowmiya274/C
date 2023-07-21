#include<stdio.h>
int main(){
    int a[10],n;
    int sum=0;
    printf("enter the sizeof array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    if(sum==0){
        printf("subarray with zero exists");
    }
        else
            printf("subarray does not exists");
    }

}
