/* A function can have multiple arguments of various types.*/
#include<stdio.h>

float simple_interest(int p,float t)
{
    float si, r = 10;
    si = p*r*t/100;
    return si;
}

int main()
{
    int principal_amount;
    float time, si;
    printf("Enter principal amount: ");
    scanf("%d",&principal_amount);
    printf("Enter time period in years: ");
    scanf("%f",&time);
    si = simple_interest(principal_amount,time);
    printf("Simple Interest = %f\n",si);

    return 0;
}
/* Expected output: Enter principal amount: 10000
                    Enter time period in years: 1.5
                    Simple Interest = 1500.000000
*/