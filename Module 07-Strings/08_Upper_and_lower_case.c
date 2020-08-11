// strupr(str) and strlwr(str) are the library functions for converting string into UPPERcase and LOWERcase respectively.
#include<stdio.h>
#include<string.h>

int main()
{
    char low[] = "i go from lower to higher";
    char high[] = "i go from higher to lower";

    printf("String 1 : %s\n",low);
    strupr(low); // Only for Windows (doesn't work in Linux Systems)
    printf("String 1 converted to UpperCase : %s\n",low);
    printf("String 2 : %s\n",high);
    strlwr(high); // Only for Windows (doesn't work in Linux Systems)
    printf("String 2 converted to LowerCase : %s\n",high);

    return 0;
}