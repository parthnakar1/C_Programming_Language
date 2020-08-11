// The library function for concatenation(addition) : strcat(target,source). This function has void return type.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[20] = "Bombay-";
    char a1[] = "Mumbai";
    char b[20] = "Madras-";
    char b1[] = "Chennai";

    strcat(a,a1);
    strcat(b,b1);

    printf("%s\n",a);
    printf("%s\n",b);

    return 0;
}
/* Expected output: Bombay-Mumbai
                    Madras-Chennai
*/