#include <stdio.h>
int BinarySearch(int array[], int start_index, int end_index, int element)
{
    while (start_index <= end_index)
    {
        int middle = start_index + (end_index- start_index )/2;
        if (array[middle] == element)
        return middle;
        if (array[middle] < element)
        start_index = middle + 1;
        else
        end_index = middle - 1;
    }
    return -1;
}
int main()
{
    
    int arr[5];
    int c=1;
    int boolval=1;
    lable:
    printf("please enter the marks of the students in descending order");
    for(int i=0;i<5;i++)
    {
        printf("please enter the marks of student %i:",c); scanf("%i", &arr[i]);
        c++;
    }
    c=1;
    for(int i=0;i<5;i++)
    {
        
        {
            while(boolval!=0)
            if(arr[i]>=arr[i+1])
            
            boolval=1;
            printf("%i",boolval);
            else

            boolval=0;            
            
        }
        printf("%i",boolval);
    }
    if (boolval!=1)
    {
        printf("please renter the array in the mentioned order!\n");
        goto lable;
    }
        
    else
    {
        int maxmarks;
        printf("please enter the max marks:"); scanf("%i", &maxmarks);
        int indexof_maxmarks=BinarySearch(arr,0,(50-1),maxmarks);
        
        printf("the student 1 has the max marks %i",arr[indexof_maxmarks]);

    } 
        //binary search fuction to find the student with the max marks 
        
    
    
    
}