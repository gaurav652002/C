#include<stdio.h>
// the first function is the bubble sort function which sorts the array in the ascending or desecnding order 
int bubblesort(int arr[], int n)
{
    int arr[]={0};
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (arr[i]<arr[j])
            {
                temp=arr[i];  // swapping of the elements
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
//the second function is for printing the array and displaying it in a an order from
    int printarray(int arr[], int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("%i ",arr[i]);
            printf("\n");
        }
    }
// binary search function is for searching a perticular element in the array an it is used to find the student with the maximum marks in the entered array of 50 students

    int binarySearch(int array[], int x, int low, int high)
    {
        
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (array[mid]==x)
            return mid;

            if (array[mid] < x)
            low = mid + 1;
            else
            high = mid - 1;
        }
        return -1;
}

int main()
{
    int arr[]={0};
    int n;
    int i;
    printf("enter the size of the array:"); scanf("%i", &n);
    printf("plese enter the elements of the array:");
    for (i=0;i<n;i++)
    {
        scanf("%i", &arr[i]);
    }
    bubblesort(arr[i],n);
    binarysearch(arr[i],n,0,n-1);
    printarray(arr[i],n);
}