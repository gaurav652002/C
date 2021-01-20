struct emp_data
{
    char *emp_name;
    int *emp_id;
    char *dep;
    char *designation;
    int *salary
};
int main()
{
    /* student is the variable of structure StudentData*/
    struct emp_data employ;

    /*Assigning the values of each struct member here*/
    employ.stu_name = "Steve";
    employ.stu_id = 1234;
    employ.stu_age = 30;
    employ.salary=scanf("%i")
    employ.designation

     /* Displaying the values of struct members */
    printf("Student Name is: %s", student.stu_name);
    printf("\nStudent Id is: %d", student.stu_id);
    printf("\nStudent Age is: %d", student.stu_age);
    return 0;
}