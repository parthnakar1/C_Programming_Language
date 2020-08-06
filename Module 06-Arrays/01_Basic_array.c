/* An Array is a group of similar data type to store series of homogeneous pieces of data that all are same in type. All elements
   of an array are stored in continuous memory block. The element of array can be accessed using [] operator.*/
#include<stdio.h>

int main()
{
    //Array Declaration
    int a[5];
    //Array Initialization
    int b[5] = {1,2,3,4,5};
    int c[] = {10,20,30,40,50};
    
    printf("Enter elements for a:\n");
    //Assigning Value
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nArray a: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\nArray b: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",b[i]);
    }

    printf("\nArray c: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");

    return 0;
}
/* Expected output:
Enter elements for a:
3
1
8
9
8

Array a: 3 1 8 9 8 
Array b: 1 2 3 4 5 
Array c: 10 20 30 40 50
*/