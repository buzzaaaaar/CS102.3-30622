#include <stdio.h>

int main()
{
    int choose;
    float no1, no2, ans;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choose);

    printf("Enter two numbers: ");
    scanf("%f%f", &no1, &no2);

    switch (choose)
    {
        case 1:
            ans = no1 + no2;
            printf("Answer is %.2f\n", ans);
            break;
        case 2:
            ans = no1 - no2;
            printf(" Answer is%.2f\n", ans);
            break;
        case 3:
            ans = no1 * no2;
            printf("Answer is %.2f\n", ans);
            break;
        case 4:
            ans = no1 / no2;
            printf(" Answer is%.2f\n", ans);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
