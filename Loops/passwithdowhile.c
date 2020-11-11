#include <stdio.h>
void main()
{
    int passcode, temp=10;
    do
    {
    printf("Enter the 4 digit password:"); 
    scanf("%d",&passcode);
   
    
     if(passcode==1234)
    {
        printf("password accepted");
        temp=temp*0;
        
    }
    else 
     {
         printf("Incorrect password \n");
         temp=temp+1;
         
     }
     
    }while(temp!=0);
     

}