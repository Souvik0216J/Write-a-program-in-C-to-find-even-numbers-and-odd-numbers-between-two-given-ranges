#include<stdio.h>
int main()
{
    int r1, r2, i;

    printf("\nEnter Range: \n");
    scanf("%d %d", &r1,&r2);

    printf("\nEven Numbers Are: \n");
    for(i=r1; i<=r2; i++)
    {
        if(i%2 == 0)
        {
            printf("%d ",i);
        }
    }
    printf("\nOdd Numbers Are: \n");
    for(i=r1; i<=r2; i++)
    {
        if(i%2 == 1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}