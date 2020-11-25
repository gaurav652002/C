#include <stdio.h>
int main() 
{
    int i, s, j, sp = 0;
    printf("Enter the final value: ");
    scanf("%d", &j);
    for (i = 1; i <= j; i++, sp = 0)
    {
        for (s = 1; s <= j - i; s++)
        {
            printf("  ");
        }
            for(;sp!=(2*i-1);sp++)
            {
                printf("* ");
            }
                printf("\n");
    }
}