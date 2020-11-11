#include <stdio.h>

int mathPow(int num, int pow)
    {
        int y=num^pow;
        return y;
    }

void introduction(char a[20], int b, double p)
        {
            
            printf("my name is %s \n", a);
            printf("class: %d\n",b);
            printf("percentage: %f\n", p);
        }

int main()
    {
        double percentage, classoryear;char name[20];
        
        printf("please enter your name class and percentage");
        scanf("%s", &name);

        printf("please enter your percentage");
        scanf("%f", &percentage);

        printf("please enter your percentage");
        scanf("%i", &classoryear);
        
        introduction(name, classoryear, percentage);
    }
