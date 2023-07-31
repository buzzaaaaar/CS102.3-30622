#include <stdio.h>
int main()
{
    int no1,no2,no3, large,small;

    printf("Input three integer numbers :");
    scanf("%d%d%d",&no1,&no2,&no3);

    if(no1>no2)
        large=no1;
    else if (no2>no3)
        large=no2;
    else
        large=no3;

    if(no1<no2)
        small=no1;
    else if (no2<no3)
        small=no2;
    else
        small=no3;

    printf("%d is the largest value.\n",large);
    printf("%d is the smallest value.",small);


    return 0;
}

