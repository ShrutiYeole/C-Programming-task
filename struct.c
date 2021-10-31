#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int age;
    double phoneno;
    double salary;
} Employee;
 
int main()
{
	int i;
    //number of employees
    int n=2;

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);

        //Age
        printf("Age: ");
        scanf("%d",&employees[i].age);

        //Phone Number
        printf("Phone Number: ");
        scanf("%lf",&employees[i].phoneno);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
     //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    printf("Name \t\t Age \t\t Phone Number\t\t Salary\n ");
    for(i=0; i<n; i++)
    {
        
        printf("%s \t %d \t %.1lf \t %.2lf \n",employees[i].name,employees[i].age,employees[i].phoneno,employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
