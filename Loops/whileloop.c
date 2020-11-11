#include <stdio.h>
int main()
{
    int a=0, upperlimit; int sum=0;
    printf("please enter the upper limit:"); scanf("%i", &upperlimit);
    while(a<=upperlimit)
    {
        sum = sum +a;
        
        a++;
    }
        printf("%i", sum);
}