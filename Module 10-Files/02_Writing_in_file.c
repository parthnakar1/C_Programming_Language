//
#include<stdio.h>

int main()
{
    char str[20], ch;
    int i = 0;
    FILE *f;
    printf("Enter a statement to be written in new file\n");
    gets(str);

    f = fopen("text.txt","w");
    while (i < 20)
    {
        ch = str[i];
        if(ch == '\0')
        {
            break;
        }
        fputc(ch,f);
        i++;
    }
    fclose(f);

    return 0;
}