/* One structure can be nested into another structure. Here we use a 2 level nesting of structures, however we can add multiple levels
   to create a complex user defined data type.*/
#include<stdio.h>

struct engine
{
    char type;
    int rpm;
};

struct vehicle
{
    struct engine e;
    int wheels;
    int load;
};

int main()
{
    struct engine e = {'C',180};
    struct vehicle v = {e,2,150};
    //Accessing elements
    printf("For vehicle v\n");
    printf("Engine:- type:%c rpm:%d\n",v.e.type,v.e.rpm);
    printf("Wheels: %d\n",v.wheels);
    printf("Load: %d\n",v.load);

    return 0;
}
/* Expected output: For vehicle v
                    Engine:- type:C rpm:180
                    Wheels: 2
                    Load: 150
*/