#include <stdio.h>
int main()
{
    int i,numst;

    for (i=1;i<=5;i++){
       numst=i;
       while(numst>0){
       printf("*");
       numst--;
       }
       printf("\n");
    }

    return 0;
}



