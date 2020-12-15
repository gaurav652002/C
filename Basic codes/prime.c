#include "stdio.h"

int main()
    {
        int n; int a; int f=1;

        printf("please enter the number:"); scanf("%i", &n);
        for(a=1;a<=n;a++)
        {
            f=f*a;
            printf("%i", &f);
        }
        
    }