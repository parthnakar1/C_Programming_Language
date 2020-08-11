// The library function to compare to strings : strcmp(str1,str2). Return type is int. It subtracts the two strings.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[] = "MiKe";
    int l1,l2,l3,l4;

    l1 = strcmp(a,"MIKE");
    l2 = strcmp(a,"mik,");
    l3 = strcmp(a,"MIke");
    l4 = strcmp(a,"MiKe");

    printf("%s - MIKE = %d\n",a,l1);
    printf("%s - mik, = %d\n",a,l2);
    printf("%s - MIke = %d\n",a,l3);
    printf("%s - MiKe = %d\n",a,l4);

    return 0;
}
/* Expected output:
MiKe - MIKE = 32
MiKe - mik, = -32
MiKe - MIke = 32
MiKe - MiKe = 0
*/