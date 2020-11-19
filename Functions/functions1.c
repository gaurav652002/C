#include <stdio.h> // simple program for printing the square of a number
int main()
    {
        int var1;// stores the valuewhich is to be enterd by the user 
        printf("please enter the number:"); scanf("%i", &var1);
        int result;// stores the result of thre number 
        result=_sq(var1);
        printf("the result is %i", result);
        return 0;
    }
int _sq(int a)
{
    int square;
    square=a*a;
    return square;
    
}