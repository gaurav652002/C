#include <stdio.h>
int main()
{
    char a;
    printf("enter a letter");
    scanf("%c", &a);
    if(a=='a'||a=='A'&&a<='z'||a<="Z")
    {
    if(a=='a'||a=="A"&& a=='e'||a=='E'&&a=='i'||a=='I'&&a=='o'||a=='O'&&a=='u'||a=='U')
    {
        printf("the character is a vowel");
    }
    else 
        printf("the character is not a vowel");
    }
        
    
        else
        printf("it is special character or a numberz");
}
    
        
        