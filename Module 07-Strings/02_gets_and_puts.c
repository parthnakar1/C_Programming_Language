// We cannot read inputs with a space in it. This can be effectively done by gets method that reads entire line. The puts method prints entire line.
#include<stdio.h>

int main()
{
    char a[20];
    char b[20];

    printf("Enter city 1 - ");
    gets(b);
    printf("Enter city 2 - ");
    scanf("%s",a);

    puts("City 1 - ");
    puts(b);
    printf("City 2:\n%s\n",a);

    return 0;
}
/* Expected output:
Enter city 1 - New York
Enter city 2 - Los Angeles
City 1 - 
New York
City 2:
Los
*/