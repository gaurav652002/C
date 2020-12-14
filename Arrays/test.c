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
    // the first thing this will do is check whether the array entered ny the user is in correct order ir not

    int arr[5];
    int c=1;
    int boolval=1;
    lable:          
    //the above lable is used to recall the particular part of the function again and again
    
    printf("please enter the marks of the students in descending order\n");
    for(int i=0;i<5;i++)
    {
        printf("please enter the marks of student %i:",c); scanf("%i", &arr[i]);
        c++;
    }
    c=1;
    int i=0;
    while(i!=5 && i+1<5 && boolval!=0)
    {
        if(arr[i]>=arr[i+1])
        boolval=1;
        else
        boolval=0;
        i++;
    }
    printf("%i\n", boolval);
    
    if (boolval!=1)
    {
        printf("please renter the array in the mentioned order!\n");
        goto lable;
    }
        
    else
    {
        int maxmarks;
        printf("please enter the max marks:"); scanf("%i", &maxmarks);
        int indexof_maxmarks=BinarySearch(arr,0,(5-1),maxmarks);
        
        printf("the student 1 has the max marks %i",arr[indexof_maxmarks]);

    } 
}
