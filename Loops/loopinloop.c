#include<stdio.h>

int main()
{
        int a,b,final; int c=1;
        printf("please enter the final no.:"); scanf("%d", &final);
        
            for(a=final;a>=1;a--)
            {
               
                    for(b=1;b<=a;b++)
                    {
                         printf("%i",b);
                    
                    }
                        printf("\n");                                
            }

}