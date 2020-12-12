#include <stdio.h>
// this funtion first reverse the number then chops it aagian and feeds it into the switch case and we get the output

void num_chop_to_word(int n)//312.123
{
    int d=0,rev=0;

    while(n!=0)
    {
        d=n%10;//3,2 ,1        //here d stores the digits
        rev=rev*10+d; //321 //rev is reversing them and storing them
        n=n/10;         // n is being chopped 
    }

    while(rev!=0)   //here in this loop we again chop the reversed string
    {
        d=rev%10;//321,32
        switch (d)
        {
            case 0: printf("Zero ");
            break;

            case 0+1: printf("One ");
            break;

            case 2: printf("Two ");
            break;

            case 3: printf("Three ");
            break;

            case 4: printf("Four ");
            break;       


            case 5: printf("Five ");
            break;

            case 6: printf("Six ");
            break;

            case 7: printf("Seven ");
            break;

            case 8: printf("eight ");
            break;

            case 9: printf("nine ");
            break;
            
        
        default:printf("please enter a valid number");
            break;
        }
        rev=rev/10;
    }
}

int main()
{
    int number;
    printf("please enter the number:"); scanf("%i",&number);//one two three
    num_chop_to_word(number);
}