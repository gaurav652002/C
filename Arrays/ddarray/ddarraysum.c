#include <stdio.h>

int sum(int arr[100][100],int n)
{
    int sum=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            sum = sum + arr[i][j];
        }
    }

    return sum;

}
int main()
{   
    int result=0;
    int arr[100][100];
    int n;

    printf("please enter the size of the array:"); scanf("%i", &n);

    printf("please enter the elements of the array:");
    for(int i=0; i<n; i++)
        
        scanf("%i", &arr[i][i]);
        
    
    result=sum(arr,n);
    printf("the sum is:%i", result);
}