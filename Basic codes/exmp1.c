#include <stdio.h>
int main()
{
    //for, do while, while
    int a,b,c; 
    printf("please enter the number of which you want the table :"); scanf("%d", &c);
    for(a=1;a<=10;a++)
    {
        b= a*c;
        printf("%d*%d=%d ", c,a,b);
    }
}