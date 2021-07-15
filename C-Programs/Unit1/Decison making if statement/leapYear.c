/* - We divide the year by 4 to check if its evenly divisible.
    Then confirm that the year is not evenly divisible by 100.
   - Check if the year is divisible by 400.
    If the year is evenly divisible by 4, then the year is a leap year.

   - If the year is only evenly divisible by 100 and not evenly divisible by 400, then the year is not a leap year.*/

#include <stdio.h>
int main()
{
    int year;
    printf("Enter Year ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is Leap Year.", year);
    }
    else
    {
        printf("%d is not Leap Year.", year);
    }

    return 0;
}