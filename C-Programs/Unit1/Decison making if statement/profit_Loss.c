#include <stdio.h>
int main()
{
    int costPrice, sellingPrice;
    float profit, loss;
    printf("Enter Selling Price \t");
    scanf("%d", &sellingPrice);
    printf("Enter Cost Price \t");
    scanf("%d", &costPrice);

    if (sellingPrice > costPrice)
    {
        profit = sellingPrice - costPrice;
        printf("You got profit of %.2f Rs", profit);
    }
    else
    {
        loss = costPrice - sellingPrice;
        printf("You got loss of %.2f Rs", loss);
    }
    return 0;
}