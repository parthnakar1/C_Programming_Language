// A structure can be passed to a function just like any other variable.
#include<stdio.h>

struct player
{
    char name[10];
    int age;
    char sex;
};

void display(struct player p)
{
    printf("Name: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("Sex: %c\n",p.sex);
}

int main()
{
    struct player p = {"Beckham",45,'M'};
    printf("Player details:\n");
    display(p);

    return 0;
}
/* Expected output:
Player details:
Name: Beckham
Age: 45
Sex: M
*/