/* Switch forms an important decision control statement. It is generally used for menu driven programs. the general form is
   switch(variable/expression)
   {
    case const_value_1:
        instructions 1;
        break;
    .
    .
    .
    default:
        instructions n;
        break;
   }
   It is essential to add break after all cases. Otherwise the remaining case instructions would be executed.
   **NOTE** : The const_value should be a predefined value. It is incorrect to use an assigned variable or constant.
*/
#include<stdio.h>

int main()
{
    int a = 3;
    printf("Switch on Integer\n");
    switch (a)
    {
    case 1:
        printf("Case = 1\n");
        break;
    case 2:
        printf("Case = 2\n");
        break;
    case 3:
        printf("Case = 3\n");
        break;
    case 4:
        printf("Case = 4\n");
        break;
    case 5:
        printf("Case = 5\n");
        break;
    default:
        break;
    }

    char b = 'b';
    printf("Switch using char\n");
    switch (b)
    {
    case 'a':
        printf("Case = 'a'\n");
        break;
    case 'e':
        printf("Case = 'e'\n");
        break;
    case 'i':
        printf("Case = 'i'\n");
        break;
    case 'o':
        printf("Case = 'o'\n");
        break;
    case 'u':
        printf("Case = 'u'\n");
        break;
    default:
        printf("Not a vowel(default case)\n");
        break;
    }

    return 0;
}
/* Expected output: Switch on Integer
                    Case = 3
                    Switch using char
                    Not a vowel(default case)
*/