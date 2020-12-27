#include <stdio.h>

    int main()
    {
        
        int n, i, *arr;
    
        printf("Enter number of elements: "); scanf("%d", &n);

    
        
        arr = (int *) malloc(n*sizeof(int));
    
        if(arr == NULL) 
        {
            printf("Error!");
            return 0;   // end of program
        }
    
        printf("Enter elements of array:");
        for(i = 0; i < n; i++)
        {
            
            scanf("%d", &arr);    
            
        }
    
        
        printf("The elements of the array are: ");
        for(i = 0; i < n; i++)
        {
            if(arr[i]%2==0)
            printf("%d  ",arr[i]);    
        }
    
    
        free(ptr);
    
        
        return 0;
    }