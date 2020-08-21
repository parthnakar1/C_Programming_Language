// The structure variable can be assigned by assignment operator(=) or partially elements can be copied.
#include<stdio.h>
#include<string.h>

struct car
{
    char model[4]; // Although we have model only of 3 letters, but an extra space is for terminating character.
    char type;     // 'S' for sedan and 'M' micro type 
    int price;
};

int main()
{
    struct car c1 = {"TYT",'S',500000},c2;
    //Partial copying
    strcpy(c2.model,"PWB");
    c2.type = c1.type;
    c2.price = 450000;
    //Copying entire variable
    struct car c3 = c1;

    printf("Car 1, Model:%s Type:%c Price:%d\n",c1.model,c1.type,c1.price);
    printf("Car 2, Model:%s Type:%c Price:%d\n",c2.model,c2.type,c2.price);
    printf("Car 3, Model:%s Type:%c Price:%d\n",c3.model,c3.type,c3.price);

    return 0;
}
/* Expected output:
Car 1, Model:TYT Type:S Price:500000
Car 2, Model:PWB Type:S Price:450000
Car 3, Model:TYT Type:S Price:500000
*/