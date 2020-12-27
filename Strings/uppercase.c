#include <stdio.h>

int main() 
{
    char str[100];
    printf("\nEnter a string : ");
    gets(str);

    for (int i = 0; str[i]!='\0'; i++) 
    {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    printf("\nString in Upper Case = %s", str);
    return 0;
}