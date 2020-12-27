#include <stdio.h>
int main ()
{
    int row,column, arr[100][100];
    
    printf("please enter the size of the row:"); scanf("%i", &row);

    printf ("Please enter the size of the column:"); scanf("%i", &column);

    for (int i=0; i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("please enter the element a[%i][%i]",i,j); scanf("%i",&arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;int product=1; int check_odd=1;int check_even=1;
    for (int i=0; i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(arr[i][j]%2==0)
            {
                sum=sum+arr[i][j];
                check_even
            }
            if(arr[i][j]%2!=0)
            {
                product=product*arr[i][j];
                check_odd=1;
            }
            else
            {
                check_odd=0;
            }
        }

    }
    if(check==0)
    {
        product=NULL;
        printf("sorry but there are no odd elements in the array and therfore the product is %i", product);
    }

    printf("the sum of the even elements: %i",&sum);
}