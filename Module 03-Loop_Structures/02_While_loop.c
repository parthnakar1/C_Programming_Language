/* The loop is entry controlled loop. The general syntax is as follows
   initialization;
   while(condition)
   {
       instructions;
       increment / decrement;
   }
*/
#include<stdio.h>

int main()
{
    int i = 1;
    printf("The Natural numbers are ");
    while (i <= 10)
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");

    return 0;
}
/* Expected output: The Natural numbers are 1 2 3 4 5 6 7 8 9 10 */