#include<stdio.h>

int main()
{
    int a = 1,b = -1;
    printf("Logical AND: (%d > 0)&&(%d > 0): %d\n",a,b,(a>0)&&(b>0));
    printf("Logical OR : (%d > 0)||(%d > 0): %d\n",a,b,(a>0)||(b>0));
    printf("Logical NOT: !(%d > 0): %d\n",a,!(a>0));

    return 0;
}
/* Expected output:
Logical AND: (1 > 0)&&(-1 > 0): 0
Logical OR : (1 > 0)||(-1 > 0): 1
Logical NOT: !(1 > 0): 0
*/