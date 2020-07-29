/* A function is used to make the code more efficient. The instuctions that are to be executed again and again are written once
   as a function and then called multiple times. This helps in making the code efficient and maintainable.The function declaration
   is to be done before calling the function. The function can be defined along with the declaration or separately. The return
   type, function name and number of parameters/arguments with its type should be declared.*/
#include<stdio.h>

void func1()
{
    printf("My body is along with function declaration itself.\n");
}

void func2();

int main()
{
    func1();
    func2();

    return 0;
}

void func2()
{
    printf("My body is separate from from function declaration done before.\n");
}
/* Expected output: My body is along with function declaration itself.
                    My body is separate from from function declaration done before.
*/