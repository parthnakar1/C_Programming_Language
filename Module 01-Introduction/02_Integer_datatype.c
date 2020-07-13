/* Integers are one of the most used data types. They can be represented in different bases. Based on the use of
   variable in the program and their limits, the can be optimized by using correct type. UNSIGNED types can be useful
   when used for variables that can never be negative and thus prevent bugs and unwanted complex program structure.
   eg. Number of employees can never be negative so an unsigned integer variable can be used.*/
#include<stdio.h>
#include<limits.h>

int main()
{
    //Integers can be expressed in different bases.
    int base_10 = 28;
    int base_8 = 010;
    int base_16 = 0x15;

    printf("All integers are in base 10 as default: %i, %i, %i\n",base_10,base_8,base_16);
    printf("All integers in base 10: %d, %d, %d\n",base_10,base_8,base_16);
    printf("All integers in base 8 : %o, %o, %o\n",base_10,base_8,base_16);
    printf("All integers in base 16: %x, %x, %x\n",base_10,base_8,base_16);
    printf("All integers in repective for are as follows: %d, %o, %x\n",base_10,base_8,base_16);

    //Various integer limits
    int a1;                     
    short int a2;
    long int a3;
    long long int a4;
    unsigned int a5;
    unsigned short int a6;
    unsigned long int a7; 
    unsigned long long int a8;
    signed int a9;
    signed short int a10;
    signed long int a11;
    signed long long int a12;
    
    printf("int                   : SIZE = %d bytes, MIN = %d, MAX = %d\n",sizeof(a1),INT_MIN,INT_MAX);
    printf("short int             : SIZE = %d bytes, MIN = %hd, MAX = %hd\n",sizeof(a2),SHRT_MIN,SHRT_MAX);
    printf("long int              : SIZE = %d bytes, MIN = %ld, MAX = %ld\n",sizeof(a3),LONG_MIN,LONG_MAX);
    printf("long long int         : SIZE = %d bytes, MIN = %lld, MAX = %lld\n",sizeof(a4),LLONG_MIN,LLONG_MAX);
    printf("unsigned int          : SIZE = %d bytes, MIN = %u, MAX = %u\n",sizeof(a5),0,UINT_MAX);
    printf("unsigned short int    : SIZE = %d bytes, MIN = %hu, MAX = %hu\n",sizeof(a8),0,USHRT_MAX);
    printf("unsigned long int     : SIZE = %d bytes, MIN = %lu, MAX = %lu\n",sizeof(a6),0,ULONG_MAX);
    printf("unsigned long long int: SIZE = %d bytes, MIN = %llu, MAX = %llu\n",sizeof(a7),0,ULLONG_MAX);
    printf("signed int            : SIZE = %d bytes, MIN = %d, MAX = %d\n",sizeof(a9),INT_MIN,INT_MAX);
    printf("signed short int      : SIZE = %d bytes, MIN = %hd, MAX = %hd\n",sizeof(a10),SHRT_MIN,SHRT_MAX);
    printf("signed long int       : SIZE = %d bytes, MIN = %ld, MAX = %ld\n",sizeof(a11),LONG_MIN,LONG_MAX);
    printf("signed long long int  : SIZE = %d bytes, MIN = %lld, MAX = %lld\n",sizeof(a12),LLONG_MIN,LLONG_MAX);

    return 0;
}
/* Expected output:
All integers are in base 10 as default: 28, 8, 21
All integers in base 10: 28, 8, 21
All integers in base 8 : 34, 10, 25
All integers in base 16: 1c, 8, 15
All integers in repective for are as follows: 28, 10, 15
int                   : SIZE = 4 bytes, MIN = -2147483648, MAX = 2147483647
short int             : SIZE = 2 bytes, MIN = -32768, MAX = 32767
long int              : SIZE = 8 bytes, MIN = -9223372036854775808, MAX = 9223372036854775807
long long int         : SIZE = 8 bytes, MIN = -9223372036854775808, MAX = 9223372036854775807
unsigned int          : SIZE = 4 bytes, MIN = 0, MAX = 4294967295
unsigned short int    : SIZE = 8 bytes, MIN = 0, MAX = 65535
unsigned long int     : SIZE = 2 bytes, MIN = 0, MAX = 18446744073709551615
unsigned long long int: SIZE = 8 bytes, MIN = 0, MAX = 18446744073709551615
signed int            : SIZE = 4 bytes, MIN = -2147483648, MAX = 2147483647
signed short int      : SIZE = 2 bytes, MIN = -32768, MAX = 32767
signed long int       : SIZE = 8 bytes, MIN = -9223372036854775808, MAX = 9223372036854775807
signed long long int  : SIZE = 8 bytes, MIN = -9223372036854775808, MAX = 9223372036854775807
*/