/* The return type of user defined function is the type of the value to be returned. It can be any data type namely int,float,...
   The functions that return nothing have return type as void. Such functions do not contain return statement in its body definition.
   Whwn no return type is declared, the default is int data type.*/
#include<stdio.h>

void func1()
{
    printf("I return nothing. My return type is void.\n");
}
int func2()
{
    printf("I return int data type. Value = ");
    return 1;
}
float func3()
{
    printf("I return float data type. Value = ");
    return 3.141592;
}
char func4()
{
    printf("I return char data type. Value = ");
    return 'a';
}

int main()
{
    int a;
    float b;
    char c;
    func1();
    a = func2();
    printf("%d\n",a);
    b = func3();
    printf("%f\n",b);
    c = func4();
    printf("%c\n",c);

    return 0;
}
/* Expected output: I return nothing. My return type is void.
                    I return int data type. Value = 1
                    I return float data type. Value = 3.141592
                    I return char data type. Value = a
*/