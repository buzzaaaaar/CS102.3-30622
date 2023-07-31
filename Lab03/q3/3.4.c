
#include <stdio.h>
int main()
{
    int diam,circum,area, rad ;

       printf("Input the Radius of Circle:");
       scanf("%d",&rad);

       diam=2*rad;
       printf("Diameter of a Circle = %d\n",diam);

       circum=2*3.14159*rad;
       printf("Circumference of a Circle = %d\n",circum);

       area=3.14159*rad*rad;
       printf("Area of a Circle = %d\n",area);

    return 0;
}
