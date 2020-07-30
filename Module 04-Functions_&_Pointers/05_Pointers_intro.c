/* The pointer is a special type of variable, which points (stores) address of another variable. It provides direct access
   to memory. Using the pointer variable you can store the address of another simple variable even you can access/edit the
   value of that variable. The pointer declaration should be done before initialization. The two can be done in same instruction.
   data_type *pointer_name;
   pointer_name = &predefined_variable;
     OR
   data_type *pointer = &predefined_variable;
   Here, '*' is Dereference/Value at operator and '&' is Reference/Address of operator.
   Each pointer variable takes 2 bytes (in 16 bytes compilers)/ 4 bytes (in 32 bytes compilers) in the memory irrespective of its datatype.
*/
#include<stdio.h>

int main()
{
    int a, b = 10;
    int *pointer1;           //Initialization of pointer
    pointer1 = &b;           //Declaration of pointer
    
    int *pointer2 = &a;      //Initialization with declaration
    *pointer2 = 5;           //Assignment of value
    
    printf("Value of variables a and b: %d and %d\n",a,b);
    printf("Value at variable a and b as accessed by pointer: %d and %d\n",*pointer1,*pointer2);
    printf("Address of variable a and b: %x and %x\n",pointer1,pointer2);

    return 0;
}
/* Expected output: Value of variables a and b: 5 and 10
                    Value at variable a and b as accessed by pointer: 10 and 5
                    Address of variable a and b: 45c791d4 and 45c791d0
*/