// When both the dimensional limits(rows and columns) are local variable, we use pointers in following ways.
#include<stdio.h>

void get_values(int a[],int row,int col)
{
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < col;j++)
        {   //Assume 2D array as 1D array.
            scanf("%d",&a[i*col + j]);
        }
    }
}

void display(int *a,int row,int col)
{
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < col;j++)
        {
            printf("%d ",*(a + i*col +j));
        }
        printf("\n");
    }
}

int main()
{
    int row,col;
    printf("Enter number of rows ");
    scanf("%d",&row);
    printf("Enter number of columns ");
    scanf("%d",&col);
    int arr[row][col];

    printf("Enter elements\n");
    get_values(arr,row,col);
    printf("Array =\n");
    display(&arr[0][0],row,col);

    return 0;
}
/* Expected output:
Enter number of rows 2
Enter number of columns 2
Enter elements
1
3
7
9
Array =
1 3 
7 9
*/