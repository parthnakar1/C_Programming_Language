// The library function for String copy : strcpy(target,source). This function has void return type.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[] = "I am char array";
    char b[20];

    strcpy(b,a);
    printf("Original string = %s\n",a);
    printf("Copied string = %s\n",b);

    return 0;
}
/* Expected output: Original string = I am char array
                    Copied string = I am char array
*/