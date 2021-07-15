#include <stdio.h>
int main()
{
    float charge, rs;
    int cust, unit;
    printf("Enter Customer Number ");
    scanf("%d", &cust);
    printf("Enter Unit consumed ");
    scanf("%d", &unit);
    if (unit < 200)
    {
        charge = unit * 0.50;
        printf("You bill no. %d and amount to be pay Rs %.2f", cust, charge);
    }
    else if (unit <= 400)
    {
        charge = 100 + 0.65 * (unit - 200);
        printf("You bill no. %d and amount to be pay Rs %.2f", cust, charge);
    }
    else if (unit <= 600)
    {
        charge = 100 + 0.80 * (unit - 400);
        printf("You bill no. %d and amount to be pay Rs %.2f", cust, charge);
    }
    else
    {
        charge = 100 + 1.0 * (unit - 600);
        printf("You bill no. %d and amount to be pay Rs %.2f", cust, charge);
    }
    return 0;
}