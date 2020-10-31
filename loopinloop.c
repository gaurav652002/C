#include<stdio.h>

int main()
{
        int a,b,final; int c;
        printf("please enter the final no.:"); scanf("%d", &final);
        
            for(a=1;a<=final; a++)
            {
                    for(b=1;b<=a;b++)
                    {
                        c=b*b;
                        printf("%d \a",c);
                    
                    }
                        printf("\n");                                
            }

}