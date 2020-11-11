#include <stdio.h>
int main()
{
    char a='a'; char b='z';
    while(a<='z'&&b>='a')
    {
        printf("%c%c ",a,b);
        a++;
        b--;
    }
}
