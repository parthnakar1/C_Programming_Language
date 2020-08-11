/* As collection of integers are stored in integer arrays, group of characters are stored in char arrays. The 1D char arrays
   are called Strings. A string is terminated by '\0'. The basic operations are as shown.*/
#include<stdio.h>

int main()
{
    //Initializations
    char name1[] = {'J','O','S','E','\0'};
    char name2[] = "HARRY W.";
    char name3[10];

    //Reading a string from user using scanf
    printf("Enter a name: ");
    scanf("%s",name3);

    //Printing all strings
    printf("The names are\n");
    for(int i = 0;i < 4;i++)
    {
        printf("%c",name1[i]);
    }
    printf("\n");
    int i = 0;
    while(name2[i] != '\0')
    {
        printf("%c",name2[i]);
        i++;
    }
    printf("\n");
    printf("%s\n",name3);

    return 0;
}
/* Expected output:
Enter a name: Mike
The names are
JOSE
HARRY W.
Mike
*/