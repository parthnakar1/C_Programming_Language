/* The do...while loop is known as Exit controlled loop. It is executed atleast once before the condition is checked.
   do
   {
       instuctions;
   } while(condition);
*/
#include<stdio.h>

int main()
{
    printf("The Natural numbers are ");
    int i = 1;
    do
    {
        printf("%d ",i);
        i++;
    }while (i <= 10);
    printf("\n");

    return 0;
}
/* Expected output: The Natural numbers are 1 2 3 4 5 6 7 8 9 10 */