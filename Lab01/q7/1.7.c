
#include<stdio.h>
int main()
{
    int no1=100,no2=200,swap;

    printf("Before the swap : no1=%d, no2=%d\n",no1,no2);
    swap=no1;
    no1=no2;
    no2=swap;
    printf("After the swap : no1=%d no2=%d",no1,no2);

    return 0;
}

