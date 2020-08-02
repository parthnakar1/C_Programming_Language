//
#include<stdio.h>

int main()
{
    int a = 10,b = 4,c = 10;
    printf("Equality: %d == %d: %d\n",a,b,a==b);
    printf("Not Equal: %d != %d: %d\n",a,b,a!=b);
    printf("Greater than: %d > %d: %d\n",a,b,a>b);
    printf("Greater than or Equal to: %d >= %d: %d\n",a,c,a>=c);
    printf("Less than: %d < %d: %d\n",a,b,a<b);
    printf("Less than or Equal to: %d <= %d: %d\n",a,c,a<=c);

    return 0;
}
/* Expected output:
Equality: 10 == 4: 0
Not Equal: 10 != 4: 1
Greater than: 10 > 4: 1
Greater than or Equal to: 10 >= 10: 1
Less than: 10 < 4: 0
Less than or Equal to: 10 <= 10: 1
*/