#include <stdio.h>
int main()
{
    int num, rem = 0, sum = 0;
    printf("Enter Number ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Sum of digit is %d", sum);
    return 0;
}