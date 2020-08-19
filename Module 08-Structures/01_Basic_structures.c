/* Structure is a user defined data type. It contains various other data types which are referred as its elements. A Structure is
   beneficial when we require a data type which is collection of other data types. It becomes easy to handle and access them.*/
#include<stdio.h>

//Declaration of a structure
struct employee
{
    char name[10];
    int id_no;
    int salary;
    int age;
};

int main()
{
    //Declaration and Assigning values to structure elements
    struct employee e1 = {"Ben",101,15000,20};
    //Accessing structure elements
    printf("Employee name: %s\n",e1.name);
    printf("Employee Id: %d\n",e1.id_no);
    printf("Salary: %d\n",e1.salary);
    printf("Employee age: %d\n",e1.age);

    return 0;
}
/* Expected output:
Employee name: Ben
Employee Id: 101
Salary: 15000
Employee age: 20
*/