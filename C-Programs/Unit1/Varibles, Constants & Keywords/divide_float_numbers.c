#include<stdio.h>
int main()
{
    float num1,num2,result;
    printf("Enter Number 1 \n");
    scanf("%f",&num1);
    printf("Enter Number 2 \n");
    scanf("%f",&num2);
    result=num1/num2;
    printf("%2.2f divided by %2.2f and result will be %2.2f ",num1,num2,result);
    return 0;
}