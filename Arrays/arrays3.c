#include <stdio.h>
int main()
{
    int i; int j;   
    int arr[5]; int sum=0; float average;
    printf("please enter the marks of subjects: ");
    for(j=0;j<5;j++)
    {
        scanf("%i",&arr[j]);
    }
    for(j=0;j<5;j++)
    {
        sum= sum+arr[j];
    }
    printf("the sum is %i",sum);
    average=sum/5;
    printf("the average is %i", average);
}