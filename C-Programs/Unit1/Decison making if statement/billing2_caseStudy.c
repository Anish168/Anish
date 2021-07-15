#include <stdio.h>
int main()
{
    char name[20];
    int units;
    float total, final;
    printf("Enter Name of user & unit consumed ");
    scanf("%s %d", name, &units);

    if (units <= 200)
    {
        total = 100 + (units * 0.80);
        printf("Your name is %s and your bill is %f.", name, total);
        if (total > 400)
        {
            final = total + 60;
            printf("You bill is above 400 so have to pay additional surcharge. Your bill is %f", final);
        }
    }

    else if (units > 200 && units <= 300)
    {
        total = 100 + (units * 0.90);
        printf("Your name is %s and your bill is %f.", name, total);
        if (total > 400)
        {
            final = total + 60;
            printf("You bill is above 400 so have to pay additional surcharge. Your bill is %f", final);
        }
    }

    else if (units > 300)
    {
        total = 100 + (units * 1);
        printf("Your name is %s and your bill is %f.", name, total);
        if (total > 400)
        {
            final = total + 60;
            printf("You bill is above 400 so have to pay additional surcharge. Your bill is %f", final);
        }
    }
    return 0;
}