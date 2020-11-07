#include <stdio.h>

void pointermagic(char *pointer)
    {
        *pointer= "Hello, World";
    }

int main()
    {
        char name[16];

        pointermagic(&name[16]);
        printf("%s",name);
    }
