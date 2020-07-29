/* The arguments are the values passed to the function which the function uses in its computation. This can be seen through the
   following code. Here we use same two numbers in two different functions. So it is efficient to read two numbers in main()
   and then use them in two functions by passing the values rather than reading the numbers two times. the latter is a redundant act.*/
#include<stdio.h>

int addition(int n1,int n2)
{
    int sum = n1 + n2;
    return sum;
}
int multiplication(int n1,int n2)
{
    int product = n1 * n2;
    return product;
}

int main()
{
    int a, b, result;
    printf("Enter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    result = addition(a,b);
    printf("%d + %d = %d\n",a,b,result);
    result = multiplication(a,b);
    printf("%d x %d = %d\n",a,b,result);

    return 0;
}
/* Expected output: Enter two numbers
                    2
                    5
                    2 + 5 = 7
                    2 x 5 = 10
*/