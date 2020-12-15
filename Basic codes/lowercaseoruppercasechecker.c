#include<stdio.h>
int main()
{
    char a;
    printf("please enter the alphabet you want to check:"); scanf("%c",&a);
        if(a>='A'&&a<='Z')
        {
                printf("the character %c that you entered is in upper case", a);
        }
            else if(a>='a'&&a<='z')
            {
                printf("the character %c that you entered is in lower case", a);

            }
            else 
                printf("%c is not a alphabet, please enter a valid alphabet!", a);
}