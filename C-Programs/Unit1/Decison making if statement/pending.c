#include <stdio.h>
int main()
{
    int price, total;
    char type;
    printf("Enter Price ");
    scanf("%d", &price);
    printf("Enter Mill cloth (M) OR Handloom items (H) \n");
    scanf("%c", &type);

    if (price > 0 && price <= 100)
    {
        if (type == 'M')
        {
            total = price;
            printf("Your total price is %d\n", total);
        }
        else
        {
            total = price - 0.05;
            printf("Your total price is %d", total);
        }

        if (price > 101 && price <= 200)
        {
            if (type == 'M')
            {
                total = price - 0.05;
                printf("Your total price is %d", total);
            }
            else
            {
                total = price - 0.075;
                printf("Your total price is %d", total);
            }

            if (price > 201 && price <= 300)
            {
                if (type == 'M')
                {
                    total = price - 0.075;
                    printf("Your total price is %d", total);
                }
                else
                {
                    total = price - 0.1;
                    printf("Your total price is %d", total);
                }
            }

            if (price > 300)
            {
                if (type == 'M')
                {
                    total = price - 0.1;
                    printf("Your total price is %d", total);
                }
                else
                {
                    total = price - 0.15;
                    printf("Your total price is %d", total);
                }
            }
        }
    }
    return 0;
}