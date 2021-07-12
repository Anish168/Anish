#include <stdio.h>
#define MOBILE_SERVICE 250 //WE WILL NOT USE = in define like Mobile service =250,its wrong
#define EACH_CALL 1.25
int main()
{
    int customer;
    float bill;
    printf("Enter calls made ");
    scanf("%d", &customer);
    if (customer > 100)
    {
        bill = MOBILE_SERVICE + (EACH_CALL * customer);
    }
    else
    {
        bill = MOBILE_SERVICE;
    }

    printf("\t********Your bill*********\n");
    printf("%.2f amount to be pay", bill);
}