#include <stdio.h>

int main()
{
    int num,i,count=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    for (i=2;i<=num;i++)
    {
        if(num%i ==0)
        {
            count ++;
        }
    }

    if (count ==1)
    {
        printf("Prime number");
    }
    else if (num == 1)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not Prime number");
    }
    return 0;

}