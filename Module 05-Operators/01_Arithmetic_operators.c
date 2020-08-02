#include<stdio.h>

int main()
{
    int a = 21,b = 5,c = -4,d = -13, res;
    //Basic assignment operator
    res = 0;
    printf("Basic Assignment Operator: res = %d\n",res);

    //Addition operator
    res = a + b;
    printf("Addition Operator: %d + %d = %d\n",a,b,res);

    //Subtraction operator
    res = a - b;
    printf("Subtration Operator: %d - %d = %d\n",a,b,res);

    //Multiplication operator
    res = a * b;
    printf("Subtraction Operator: %d * %d = %d\n",a,b,res);

    //Division operator
    res = a / b;
    printf("Division Operator: %d / %d = %d\n",a,b,res);

    //Modulus operator(remainder of a / b)
    res = a % b;
    printf("Modulus Operator: %d %% %d = %d\n",a,b,res);
    //The sign of the remainder is always same as that of numerator. Also note that to print '%' in printf we write '%%'
    printf("%d %% %d = %d, %d %% %d = %d, %d %% %d = %d\n\n",a,c,a%c,d,b,d%b,d,c,d%c);

    //Increment and Decrement operators
    a = 10;
    printf("a = %d\n",a);
    printf("Pre-Increment Operator: res = ++a = %d\n",res = ++a);
    printf("a = %d\n",a);
    printf("Post-Increment Operator: res = a++ = %d\n",res = a++);
    printf("a = %d\n",a);
    printf("Pre-Decrement Operator: res = --a = %d\n",res = --a);
    printf("a = %d\n",a);
    printf("Post-Decrement Operator: res = a-- = %d\n",res = a--);
    printf("a = %d\n",a);

    return 0;
}
/* Expected output;
Basic Assignment Operator: res = 0
Addition Operator: 21 + 5 = 26
Subtration Operator: 21 - 5 = 16
Subtraction Operator: 21 * 5 = 105
Division Operator: 21 / 5 = 4
Modulus Operator: 21 % 5 = 1
21 % -4 = 1, -13 % 5 = -3, -13 % -4 = -1

a = 10
Pre-Increment Operator: res = ++a = 11
a = 11
Post-Increment Operator: res = a++ = 11
a = 12
Pre-Decrement Operator: res = --a = 11
a = 11
Post-Decrement Operator: res = a-- = 11
a = 10
*/