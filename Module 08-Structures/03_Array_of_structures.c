//Multiple variables of any structures can be stored sequentially in array just like any other data type.
#include<stdio.h>

struct book
{
    char name[5];
    int pages;
    float price;
};

int main()
{
    struct book b[3];
    for(int i = 0;i < 3;i++)
    {
        printf("Enter name, number of pages and price of a book\n");
        scanf("%s",b[i].name);
        scanf("%d",&b[i].pages);
        scanf("%f",&b[i].price);
    }

    for (int i = 0;i < 3;i++)
    {
        printf("Book %d: Name:%s Pages:%d Price:%f\n",i,b[i].name,b[i].pages,b[i].price);
    }
    
    return 0;
}
/* Expected output:
Enter name, number of pages and price of a book
aBc
120
99.50
Enter name, number of pages and price of a book
def
500
100.75
Enter name, number of pages and price of a book
ghi
278
660.99
Book 0: Name:aBc Pages:120 Price:99.500000
Book 1: Name:def Pages:500 Price:100.750000
Book 2: Name:ghi Pages:278 Price:660.989990
*/