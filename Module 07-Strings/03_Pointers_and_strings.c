// A pointer can be used to access a string(Character array) or also for storing the string itself.
#include<stdio.h>

int main()
{
    char a[] = "Hello";
    char *p;
    char *str = "Good bye";

    for(int i = 0;i < 5;i++)
    {
        p = &a[i];
        printf("%c",*p);
    }
    printf("\n");
    for (int i = 0;i < 8;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}
/* Expected output: Hello
                    Good bye
*/