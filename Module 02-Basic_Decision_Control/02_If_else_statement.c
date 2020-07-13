/* The if else statement is used when there are two set of statements for both true and false condition. The general form is
   if(condition)
   {
       instructions 1;
   }
   else
   {
       instructions 2;
   }
*/
#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a,printf("Enter a number "));
    if(a > 10)
    {
        printf("Number greater then 10\n");
    }
    else        //Note else has no condition and is executed when condition is false.
    {
        printf("Number less than equal to 10\n");
    }

    return 0;
}
/* Expected output: Enter a number 9
                    Number less than 10
*/