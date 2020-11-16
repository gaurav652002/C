#include <stdio.h>
void main()// non return function

{
    int password; int tries=1;// stores the password anf the variable which makes the code run again until correct pass word is enterd

    for(;tries!=0;tries++)
    {// this program runs untill the user enters the correct password, if wrong password is entered the code will run again and ask the user to enter the password again and if correct password is entered the loop will break and the code will stop but if the user enters the a character then the loop will run continuously 
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