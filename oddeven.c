#include <stdio.h>

void main()
{
    int i, num, odd= 0, even= 0;

    printf("Enter the value of num");
    scanf("%d",&num);
    for (i = 1; i<= num;i++)
    {
        if (i % 2==0)
            even=even+ i;
        else
            odd=odd + i;
    }
    printf("odd  = %d\n",odd);
    printf("even  = %d\n",even);
}
