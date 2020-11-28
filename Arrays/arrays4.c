#include <stdio.h>
int main()
{
    int i; int j;   
    int arr[5]; int sum; int average;
    for(j=0;j<5;j++)
    {
        printf("please enter the marks of subjects: ");
        scanf("%i",&arr[j]);
    }
    for(j=0;j<5;j++)
    {
        sum+=arr[j];
    }
    printf("the sum is %i",sum);
    average=sum/5;
    printf("the average is %i", average);
}