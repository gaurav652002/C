nt main()
{

    int arr[5];
    int c=1;
    int boolval=1;
    lable:
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