#include<stdio.h>
int main()
    {
        int var1;// stores the valuewhich is to be enterd by the user 
        printf("please enter the number:"); scanf("%i", &var1);
        int result;// stores the result of thre number 
        result=fibonacci(var1);
        printf("the result is %i", result);
        return 0;
    }
int fibonacci(int a)
{
    if (a<=1)
    return a;
    return fibonacci(a-1)+fibonacci(a-2);
}