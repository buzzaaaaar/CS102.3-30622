#include <stdio.h>
int main()
{
    int no1=0,no2=1,no3,i;

    printf("The first 10 Fibonacci numbers are :\n");
    printf("%d%d",no1,no2);

    for(int i=3; i<=10 ;i++){
        no3=no1+no2;
        printf("%d",no3);
        no1=no2;
        no2=no3;
    }

    return 0;
}


