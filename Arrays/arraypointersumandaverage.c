#include<stdio.h>
int main()
{
    double arr[]={0}, sum=0.0, mean; int n;
    
    double *p1x, *p1sum, *p1avg;

    p1x = &arr[0];  
    p1sum = &sum, p1avg = &mean;
    printf("please enter the size:"); scanf("%i",&n);
    printf("Enter array Elements: ");
    for (int i=0;i<n;i++)
    {
        scanf("%f",(p1x+i));
        *p1sum += *(p1x + i);
    }

    *p1avg = *p1sum / 5;
    printf("Sum= %f \n Average= %f\n", *p1sum, *p1avg);

    return 0;
}