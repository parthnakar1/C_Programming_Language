/* Loops can be nested in similar way as if statements were nested. Here a for loop is implemented inside a for loop.
   If outer loop executes m times and inner loop n times separately, then the combined nested loop will be executed m*n 
   times. Usually nesting of loops is costly process w.r.t to time complexity.
*/
#include<stdio.h>

int main()
{
    printf("Nested loop pattern\n");
    for(int i = 1;i <= 5;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
/* Expected output:
Nested loop pattern
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
*/