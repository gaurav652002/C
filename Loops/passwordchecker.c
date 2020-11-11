#include <stdio.h>
void main()
{
    int password, tries=1;
    while(tries!=0)
    {
    printf("please enter the 4 digit integer password:"); scanf("%i",&password);
   
    
     if(password==1234)
    {
        printf("password accepted");
        tries=0;
        
    }
    else 
     {
         printf("Incorrect password");
         tries++;
     }
     
     
     printf("\n");
}
}