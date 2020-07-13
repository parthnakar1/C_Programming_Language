/**/
#include<stdio.h>
#include<limits.h>

int main()
{
    //double initialization in different forms
    double a1 = 3.141;
    double a2 = -1.232146876;
    double a3 = 6.35e+9;

    printf("Double format     : %lf, %lf, %lf \n",a1,a2,a3);
    printf("Exponential format: %e, %e, %e \n",a1,a2,a3);
    printf("Shorter format    : %lg, %lg, %lg \n",a1,a2,a3);
    //Double comparison
    double a4 = 12.9272;
    printf("Double :%lf\nExponential:%e\nShorter:%lg\n",a4,a4,a4);
    
    //double size and limits
    long double a5 = 4.345262896;
    printf("double     :  SIZE = %d, MIN = %g, MAX = %g\n",sizeof(a4),__FLT_MIN__,__FLT_MAX__);
    printf("long double: SIZE = %d, MIN = %g, MAX = %g\n",sizeof(a5),__DBL_MIN__,__DBL_MAX__);

    return 0;
}
/* Expected output:
Double format      : 3.141000, -1.232147, 6350000000.000000 
Exponential format: 3.141000e+00, -1.232147e+00, 6.350000e+09 
Shorter format    : 3.141, -1.23215, 6.35e+09 
Double :12.927200
Exponential:1.292720e+01
Shorter:12.9272
double     :  SIZE = 8, MIN = 1.17549e-38, MAX = 3.40282e+38
long double: SIZE = 16, MIN = 2.22507e-308, MAX = 1.79769e+308
*/