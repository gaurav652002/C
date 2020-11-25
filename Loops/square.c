#include <stdio.h>
int main()
{
    int final;
    int i, j;
    printf("Enter the final number: ");  scanf("%i", &final);
    for(i=final; i>=1; i--)
    {
        for(j=final; j>i; j--)
        {
            printf("%i", j);
        }
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%i", i);
        }
        for(j=i+1; j<=final; j++)
        {
            printf("%i", j);
        }
        printf("\n");
    }

    for(i=1; i<final; i++)
    {

        for(j=final; j>i; j--)
        {

            printf("%d", j);
        }

        for(j=1; j<=(i*2-1); j++)
        {

            printf("%d", i+1);
        }

        for(j=i+1; j<=final; j++)
        {

            printf("%i", j);
        }

        printf("\n");

    }
    return 0;
}