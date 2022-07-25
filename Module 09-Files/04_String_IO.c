//
#include<stdio.h>
#include<string.h>

int main()
{
    char s[80];
    int n;
    FILE *f;
    //Appending file text.txt
    f = fopen("text.txt","a");
    printf("Enter number of lines to be added\n");
    scanf("%d",&n);
    printf("Enter lines to be added.\n");
    for(int i = 0;i <= n;i++)
    {
        fgets(s,79,stdin);
        fputs(s,f);
    }
    fclose(f);

    //Reading entire file text.txt again
    f = fopen("text.txt","r");
    while (fgets(s,79,f) != NULL)
    {
        printf("%s",s);
    }
    fclose(f);

    return 0;
}