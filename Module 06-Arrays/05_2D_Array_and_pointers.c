// The array can be accessed using pointer in the two following ways.
#include<stdio.h>

int main()
{
    int a[3][3];
    int *array = a;

    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {   //We point the a + i*(no of columns) + j
            *(array + i*3 + j) = (i+1)*(j+1);
        }
    }

    printf("Array = \n");
    for(int i = 0;i < 3;i++)
    {
        for (int  j = 0;j < 3;j++)
        {   
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }

    return 0;
}
/* Expected output:
Array = 
1 2 3 
2 4 6 
3 6 9
*/