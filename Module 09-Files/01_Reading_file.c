//
#include<stdio.h>

int main()
{
    FILE *f;
    char ch;

    f = fopen("text.txt","r");
    while (1)
    {
        ch = fgetc(f);
        if(ch == EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(f);
    printf("\n");

    return 0;
}