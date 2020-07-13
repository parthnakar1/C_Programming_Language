/**/
#include<stdio.h>
#include<limits.h>

int main()
{
    //float initialization in different forms
    float a1 = 3.141592;
    float a2 = -1.232;
    float a3 = 6.35e+9;

    printf("Float format      : %f, %f, %f \n",a1,a2,a3);
    printf("Exponential format: %e, %e, %e \n",a1,a2,a3);
    printf("Shorter format    : %g, %g, %g \n",a1,a2,a3);
    //Float comparison
    float a4 = 12.9272;
    printf("Float :%f\nExponential:%e\nShorter:%g\n",a4,a4,a4);
    
    //Float size and limits
    printf("float:  SIZE = %d, MIN = %g, MAX = %g\n",sizeof(a4),__FLT_MIN__,__FLT_MAX__);

    return 0;
}
/* Expected output:
Float format      : 3.141592, -1.232000, 6350000128.000000 
Exponential format: 3.141592e+00, -1.232000e+00, 6.350000e+09 
Shorter format    : 3.14159, -1.232, 6.35e+09 
Float :12.927200
Exponential:1.292720e+01
Shorter:12.9272
float:  SIZE = 4, MIN = 1.17549e-38, MAX = 3.40282e+38
*/