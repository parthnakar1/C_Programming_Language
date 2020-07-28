/* The continue statement passes the control to the start. When continue is encountered inside any loop, control automatically passes to
   the beginning of the loop. It is used inside if statements. Here in this code, value of i will be printed only when it is multiple of 3*/
#include<stdio.h>

int main()
{
    printf("Multiples of 3 from 1 to 10: ");
    for(int i = 1;i <= 10;i++)
    {
        if(i%3 != 0)
        {
            continue;
        }
        printf("%d ",i);
    }
    printf("\n");

    return 0;
}
/* Expected output: Multiples of 3 from 1 to 10: 3 6 9*/