#include <stdio.h>
int main()
{
    int i;
    int marks[5];
    printf("please enter the marks of 5 students: \n");
    for(i=0;i<=4;i++)
    {
        scanf("%i",&marks[i]);
    }
    printf("\n");
    printf("[");
    for(i=0;i<=4;i++)
    {
        printf("%i", marks[i]);
        printf(", ");
    }
    printf("]");
}