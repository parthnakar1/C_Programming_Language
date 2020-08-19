// A structure variable can be accessed using pointer.
#include<stdio.h>
struct student
{
    char name[10];
    int id;
    float percentage;
};

int main()
{
    struct student s1;

    printf("Enter name: ");
    scanf("%s",s1.name);
    printf("Enter ID: ");
    scanf("%d",&s1.id);
    printf("Enter Percentage: ");
    scanf("%f",&s1.percentage);

    struct student *ptr = &s1;
    printf("Student Details\n");
    printf("Name: %s\n",ptr->name);
    printf("ID: %d\n",ptr->id);
    printf("Percentage: %f\n",ptr->percentage);

    return 0;
}
/* Expected output:
Enter name: XYZ
Enter ID: 10
Enter Percentage: 87.5
Student Details
Name: XYZ
ID: 10
Percentage: 87.500000
*/