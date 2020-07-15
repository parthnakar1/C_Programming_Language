/* The for loop is the most basic loop. It is an entry controlled loop. The general form is
   for(initialization; condition; increment/decrement)
   {
       instructions;
   }
*/
#include<stdio.h>

int main()
{
    printf("The Natural numbers are ");
    for(int i = 1;i <= 10;i++)
    {
        printf("%d ",i);
    }
    printf("\n");

    return 0;
}
/* Expected output: The Natural numbers are 1 2 3 4 5 6 7 8 9 10 */