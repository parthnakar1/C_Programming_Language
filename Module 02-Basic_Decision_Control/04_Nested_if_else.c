/* Nested  if else are useful to check detailed conditions linked and dependent on previous conditions.*/
#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a,printf("Enter a number "));
    if(a == 10)
    {
        printf("Entered number is equal to 10\n");
    }
    else
    {
        if(a > 10)
        {
            printf("Entered number is greater than 10\n");
        }
        else
        {
            printf("Entered number is less than 10\n");
        }
    }
    
    return 0;
}
/* Expected output: Enter a number 20
                    Entered number is greater than 10
*/