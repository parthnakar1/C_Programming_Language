// When 2nd dimension is available globally(Number of columns) then we can pass 2D Array as 1D Array.
#include<stdio.h>
const int col = 3;

void get_values(int row,int arr[][col])
{
    for(int i = 0;i < row;i++)
    {
        for (int j = 0; j < col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void display(int row,int arr[][col])
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
    int row;
    printf("Enter number of rows ");
    scanf("%d",&row);
    int arr[row][col];
    printf("Enter elements\n");
    get_values(row,arr);
    printf("Array = \n");
    display(row,arr);

    return 0;
}
/* Expected output:
Enter number of rows 2
Enter elements
1
2
3
4
5
6
Array = 
1 2 3 
4 5 6
*/