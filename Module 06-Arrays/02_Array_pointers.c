#include<stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    
    for(int i = 0;i < 5;i++)
    {
        printf("Address:%u Element:%d\n",a+i,a[i]);
    }
    //Accessing elements using pointer
    int *array = a;
    printf("Pointer pointing to %u has value %d\n",array,*array);
    array++;
    printf("Pointer pointing to %u has value %d\n",array,*array);

    return 0;
}
/* Expected output:
Address:1167485280 Element:1
Address:1167485284 Element:2
Address:1167485288 Element:3
Address:1167485292 Element:4
Address:1167485296 Element:5
Pointer pointing to 1167485280 has value 1
Pointer pointing to 1167485284 has value 2
*/