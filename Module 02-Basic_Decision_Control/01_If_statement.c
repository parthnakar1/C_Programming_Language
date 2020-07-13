/* The if statement is most basic decision control statement. It is used when a set of instructions are to be implemented
   only if a given condition is true. The general form is :
   if(condition)
   {
       instructions;
   }
*/
#include<stdio.h>

int main()
{
    //comparison condition
    if(3+4 > 5)
    {
        printf("1st if executed\n");
    }
    //Positive number passed as condition
    if(4)
    {
        printf("2nd if executed\n");
    }
    //0 passed as condition
    if(0)
    {
        printf("3rd if executed\n");
    }
    //Negative number passed as condition
    if(-1)
    {
        printf("4th if executed\n");
    }
    //Assignment of variable as a condition
    int a;
    if(a = 6)
    {
        printf("5th if executed\n");
    }

    return 0;
}
/* Expected output: 1st if executed
                    2nd if executed
                    4th if executed 
                    5th if executed
   As seen from the output, the if condition is executed for all except 0.
   Any value other than 0 is considered as true.
*/