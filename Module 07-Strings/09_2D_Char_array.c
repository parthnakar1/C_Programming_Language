// A 2D char array can be used in many ways to store multiple strings.
#include<stdio.h>
#include<string.h>

int main()
{
    int flag = 0;
    char names[5][10] ={"Mike","John","Kevin","Samuel","David"};
    char a[10];
    printf("Enter your name: ");
    scanf("%s",a);
    for(int i = 0;i < 5;i++)
    {
        if(strcmp(a,names[i]) == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("You are welcome\n");
    }
    else
    {
        printf("Either you have entered your name incorrectly or you aren't invited\n");
    }

    return 0;
}
/* Expected output: Enter your name: Mike
                    You are welcome
*/