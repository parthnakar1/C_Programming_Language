/* Some additional techniques while using Switch have been discussed. Multiple cases can have same set of instructions to be
   executed. Ranges can be used instead of constant_value*/
#include<stdio.h>

int main()
{
    char var = 'e';
    switch (var)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("You have entered a vowel\n");
        break;
    default:
        printf("Not a vowel\n");
        break;
    }

    int age = 23;
    printf("You are ");
    switch(age)
    {
    case 1 ... 12:
        printf("Child\n");
        break;
    case 13 ... 19:
        printf("Teen\n");
        break;
    case 20 ... 59:
        printf("Adult\n");
        break;
    case 60 ... 100:
        printf("Senior Citizen\n");
        break;
    default:
        printf("entering invalid age\n");
        break;
    }

    return 0;
}
/* Expected output: You have entered a vowel
                    You are Adult
*/