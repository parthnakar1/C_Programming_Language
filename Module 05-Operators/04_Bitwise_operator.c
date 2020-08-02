#include<stdio.h>

int main()
{
    short int a = 4,b = 10;
    //Bitwise not gives result in 2's complement form.
    printf("Bitwise NOT: ~%d = %d\n",a,~a);
    printf("Bitwise AND: %d & %d = %d\n",a,b,a&b);
    printf("Bitwise OR : %d | %d = %d\n",a,b,a|b);
    printf("Bitwise XOR : %d ^ %d = %d\n",a,b,a^b);
    //Syntax: variable << positions. It gives result equivalent of multiplication by 2 for one position shift.
    printf("Bitwise leftshift: %d << 1 = %d\n",a,a<<1);
    //Syntax: variable >> positions. It gives result equivalent of division by 2 for one position shift.
    printf("Bitwise leftshift: %d >> 1 = %d\n",a,a>>1);

    return 0;
}
/* Expected output:
Bitwise NOT: ~4 = -5
Bitwise AND: 4 & 10 = 0
Bitwise OR : 4 | 10 = 14
Bitwise XOR : 4 ^ 10 = 14
Bitwise leftshift: 4 << 1 = 8
Bitwise leftshift: 4 >> 1 = 2
*/