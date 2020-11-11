#include <stdio.h>
int main()
{
    int a=1; int upperlimit;
    printf("please enter the upper limit:"); scanf("%i", &upperlimit);    
    while (a<=upperlimit)
    {

        if(a%2!=0)
        printf("%i\n",a);
        a++;
    }
}