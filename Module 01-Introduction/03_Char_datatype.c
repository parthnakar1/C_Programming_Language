/* Char are used to variables storing characters and symbols primarily. They can also be assigned integral values according
   to the ASCII codes. They can also be used for efficiently storing small numbers(less than 255) for memory optimization.*/
#include<stdio.h>
#include<limits.h>

int main()
{
    char a1 = 'a';
    char a2 = '(';
    char a3 = '0';
    char a4 = 65;

    printf("All character variables as char: %c, %c, %c, %c\n",a1,a2,a3,a4);
    printf("All character variables as integer values: %d, %d, %d, %d\n",a1,a2,a3,a4);

    //char limits
    char CHAR;
    unsigned char U_CHAR;
    signed char S_CHAR;
    printf("CHAR BIT : %d\n",CHAR_BIT);
    printf("char         : SIZE = %d bytes, MIN = %d, MAX = %d\n",sizeof(CHAR),CHAR_MIN,CHAR_MAX);
    printf("unsigned char: SIZE = %d bytes, MIN = %d, MAX = %d\n",sizeof(U_CHAR),0,UCHAR_MAX);
    printf("signed char  : SIZE = %d bytes, MIN = %d, MAX = %d\n",sizeof(S_CHAR),CHAR_MIN,CHAR_MAX);

    //char arithmetic
    char a5 = 'A', a6 = 48;
    char a7 = a5 + a6;
    printf("Char Arithmetic: %c + %c = %c\n",a5,a6,a7);

    return 0;
}
/* Expected output:
All character variables as char: a, (, 0, A
All character variables as integer values: 97, 40, 48, 65
CHAR BIT : 8
char         : SIZE = 1 bytes, MIN = -128, MAX = 127
unsigned char: SIZE = 1 bytes, MIN = 0, MAX = 255
signed char  : SIZE = 1 bytes, MIN = -128, MAX = 127
Char Arithmetic: A + 0 = q
*/