//This program explains basic printing and scanning operations
#include<stdio.h>
//stdio.h is the header file. It contains declaration for printf and scanf.
#include<stdbool.h>
//stdbool.h contains declarations for boolean data type.

int main()
{   
    //main is the system thread which is executed.
    printf("Hello World\n");
    printf("Printing basic data types through printf statement\n");
    int a = 1;
    printf("Integer a = %d\n",a);
    float b = 0.4;
    printf("Float(decimal) = %f\n",b);
    char c = 'c';
    printf("Character = %c\n",c);
    bool d = 0;
    printf("Boolean(binary data type) = %i\n",d);

    printf("Scanning basic data type through scanf statement\n");
    scanf("%d",&a);
    scanf("%f",&b);

    return 0;
}
/* Expected output: Hello World
                    Printing basic data types through printf statement
                    Integer a = 1
                    Float(decimal) = 0.400000
                    Character = c
                    Boolean(binary data type) = 0
                    Scanning basic data type through scanf statement
                    ->(Enter an integer)
                    ->(Enter an character)
*/