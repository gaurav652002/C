#include <stdio.h>
int  factorial(int a)
{
    if(a>=1)
    return a*factorial(a-1);
    else 
    return 1;
}
int main()
{
    int a;
    printf("please enter the value of the number you want to find the square of:"); scanf("%i", &a);
    int result;
    result=factorial(a);
    printf("the result is: %i", result);
}