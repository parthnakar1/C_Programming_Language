/* A 2D Array is a built in data structure two store data two dimensional data(like a matrix). However the 2D structure is only
   conceptually in 2 dmensions. Physically it is stored in a continuous block of memory just like 1D aray(The elements are stored
   row wise). This property helps accessing using a pointer.*/
#include<stdio.h>

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("2 D Array Elements:\n");
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/* Expected output:
2 D Array Elements:
1 2 3 
4 5 6 
7 8 9
*/