// When both dimensions are available globally we can pass 2D Array directly.
#include<stdio.h>
const int row = 3;
const int col = 3;

void get_values(int arr[row][col])
{
    for(int i = 0;i < row;i++)
    {
        for (int j = 0; j < col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void display(int arr[row][col])
{
    for(int i = 0;i < row;i++)
    {
        for (int  j = 0;j < col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[row][col];
    printf("Enter elements\n");
    get_values(arr);
    printf("Array = \n");
    display(arr);

    return 0;
}
/* Expected output:
Enter elements
12
51
87
-4
67
81
38
92
64
Array = 
12 51 87 
-4 67 81 
38 92 64
*/