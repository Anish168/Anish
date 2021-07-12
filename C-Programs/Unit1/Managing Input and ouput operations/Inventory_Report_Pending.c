#include <stdio.h>
#define ITEMS 4 
int main()
{
    char code;
    int quantity, value, item;
    float rate;
    item = 0;
    printf("Enter code ");
    code = getchar();
    printf("Enter quantity ");
    scanf("%d\n", &quantity);
    printf("Enter rate ");
    scanf("%f\n", &rate);
    while (item <= ITEMS)
    {
        value = quantity * rate;
        printf("Code \t Quantity \t Rate \t Value \n");
        printf("%c \t %d \t %.2f \t %d \n", code, quantity, rate, value);
        item++;
        break;
    }
}