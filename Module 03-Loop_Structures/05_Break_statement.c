/* The break statement is used to abruptly stop the loop before the condition set is achieved. It is used to break/terminate
   the loop execution and program’s control reaches to the next statement written after the loop body.*/
#include<stdio.h>

int main()
{
    int key = 5;
    for(int i = 1;i <= 10;i++)
    {
        if(i == key)
        {
            printf("Key found\n");
            break;
        }
        printf("%d is the number\n",i);
    }

    return 0;
}
/* Expected output:
1 is the number
2 is the number
3 is the number
4 is the number
Key found
*/