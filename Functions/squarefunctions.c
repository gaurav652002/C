
#include<stdio.h>
int main()
{
    int a; int result;
    for(a=1;a<=10;a++)
    {
        result=square(a);
        printf("%i \n", result);
    }
}
int square(int a)
{
    int c;
    c=a*a;
    return c;
}
