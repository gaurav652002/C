#include <stdio.h>
 int main()
 {
     char arr[]={0};
     int n;
     printf("please enter the size of string arr:"); scanf("%i", &n);
     for (int i=0; i<n; i++)
     {
         scanf("%s", &arr[i]);
     }
     for (int i=0; i<n; i++)
     {
         printf("%s", arr[i]);
     }

 }