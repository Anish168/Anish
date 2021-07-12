#include <stdio.h>
/*#define BASE_SAL=1500.00
#define BONUS=200.00
#define COMISSION=0.02*/

int main()
{
    float base_sal = 1500.00, bonus = 200.00, commission = 0.02;
    int quantity, price, Bonus, com, gross;

    printf("Enter how many computer you have sold ");
    scanf("%d", &quantity);
    printf("Enter price of computer you have sold ");
    scanf("%d", &price);

    Bonus = bonus * quantity;
    com = commission * quantity * price;
    gross = base_sal + Bonus + com;

    printf("******Employeeee Salary********\n");
    printf("Bonus You have earned %d\n", Bonus);
    printf("Comission that you will get %d\n", com);
    printf("Your Total Salary is %d\n", gross);
    printf("******Do your Best and earn more profit*****");
    
    return 0;
}