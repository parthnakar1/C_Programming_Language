/* Pointers as arguments can read/change the values of the variables that are pointed at. When we pass variables as arguments in function,
   the function creates its own copy of variables on which the computation takes place. So the original variables remain unchanged
   and no operations are performed on it. Such instances are known as Call by value. However when the arguments of a function are
   pointers they point to original set of variables passed and hence their values can be changed. This is known as Call by reference.
*/
#include<stdio.h>

void swap_value(int a,int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

void swap_reference(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n1 = 10,n2 = 15;
    printf("Numbers 1 and 2 before swapping: %d and %d\n",n1,n2);
    swap_value(n1,n2);
    printf("Numbers 1 and 2 after swap by value: %d and %d\n",n1,n2);
    swap_reference(&n1,&n2);
    printf("Numbers 1 and 2 after swap by reference: %d and %d\n",n1,n2);

    return 0;
}
/* Expected output: Numbers 1 and 2 before swapping: 10 and 15
                    Numbers 1 and 2 after swap by value: 10 and 15
                    Numbers 1 and 2 after swap by reference: 15 and 10
*/