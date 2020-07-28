/* The goto keyword is used for passing the control to any desired statement. It is a control statement. The syntax is as follows:
   label_name:
   instruction 1;
   .
   .
   .
   goto label_name;
   NOTE: The label can be present before or after the goto statement. If it is before then it acts as loop, else it omits the
   execution of few steps.*/
#include<stdio.h>

int main()
{
    int a;
    repeat:
    printf("Enter a positive integer: ");
    scanf("%d",&a);
    if(a <= 0)
    {
        printf("Enter again\n");
        goto repeat;
    }
    printf("Your number is %d\n",a);

    return 0;
}
/* Expected output:
Enter a positive integer: -2
Enter again
Enter a positive integer: 9
Your number is 9
*/