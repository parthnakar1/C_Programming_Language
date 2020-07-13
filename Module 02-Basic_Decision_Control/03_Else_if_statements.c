/* The else if ladder is used when multiple conditions are to be checked. There is no bound on number of else ifs. The general form  is
   if(condiion 1)
   {
       instructions 1;
   }
   else if(condition 2)
   .
   .
   .
   else
   {
       instruction n;
   }
*/
#include<stdio.h>

int main()
{
    int marks;
    scanf("%d",&marks,printf("Enter your marks "));
    if(marks > 90)
    {
        printf("GRADE : A\n");
    }
    else if (marks > 75)
    {
        printf("GRADE : B\n");
    }
    else if(marks > 60)
    {
        printf("GRADE : C\n");
    }
    else if(marks > 34)
    {
        printf("GRADE : D\n");
    }
    else
    {
        printf("GRADE : FAIL\n");
    }

    return 0;
}
/* Expected output: Enter your marks 87
                    GRADE : B
   Only 1 true condition or else will be executed from the entire ladder. Also the conditions are checked only until true is found.
   There after it skips all the conditions and else statement.
*/