//
#include<stdio.h>

int main()
{
    char ch, app[] = "File appended.";
    int i = 0;
    FILE *f;

    f = fopen("text.txt","a");
    while (1)
    {
        ch = app[i];
        if (ch == '\0')
        {
            break;
        }
        fputc(ch,f);
        i++;
    }
    fclose(f);

    return 0;
}