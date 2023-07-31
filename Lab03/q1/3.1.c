#include <stdio.h>
int main()
{
    int no1, no2, max;

    printf("Input two bumbers :");
    scanf("%d%d",&no1, &no2);

    if(no1>no2)
    max=no1;
    else
    max=no2;

    printf("%d is the highest number.",max);

    return 0;
}
