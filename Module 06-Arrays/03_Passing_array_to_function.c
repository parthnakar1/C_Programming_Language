#include<stdio.h>

void display(int a[],int n)
{
    for(int i = 0;i < n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    
    printf("Elements of array: ");
    display(a,sizeof(a)/sizeof(a[0]));
    printf("\n");

    return 0;
}
/* Expected output: Elements of array: 1 2 3 4 5*/