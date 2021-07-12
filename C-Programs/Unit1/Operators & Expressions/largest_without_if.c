#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter Number 1 ");
    scanf("%d", &num1);
    printf("Enter Number 2 ");
    scanf("%d", &num2);
    printf("Enter Number 3 ");
    scanf("%d", &num3);
    while (num1 > num2 && num1 > num3)
    {
        printf("%d is greater", num1);
        break;
    }

    while (num2 > num1 && num2 > num3)
    {
        printf("%d is greater", num2);
        break;
    }
    while (num3 > num1 && num3 > num2)
    {
        printf("%d is greater", num3);
        break;
    }
}