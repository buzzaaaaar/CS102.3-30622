#include <stdio.h>
int main()
{
    int num,ognum,remain,sum;
    printf("Enter a Number :");
    scanf("%d",&num);

    ognum=num;

    while(num>0){
        remain=num%10;
        sum+=remain*remain*remain;
        num/=10;
    }
    if (sum==ognum){
        printf("The number %d is an Armstrong number \n",ognum);

    }else{
         printf("The number %d isn't an Armstrong number \n",ognum);
    }

    return 0;
}


