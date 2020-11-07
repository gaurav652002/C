#include <stdio.h>
void main()
{
    int password; int tries=1;

    for(;tries!=0;tries++)
    {
        printf("please enter the 4 digit integer password:"); scanf("%i",&password);
    
        if(password==1234)
        {
            printf("password accepted");
            tries=0;
            break;
        }

            else 
            {
                printf("Incorrect password");
            }

                printf("\n");
}
}