#define NUMBER 10
#include <stdio.h>
int main()
{
    int sum = 0, count = 0, num;
    float avg;
    while (count < NUMBER)
    {
        scanf("%d \n", &num);
        sum = sum + num;
        count = count + 1;
    }
    avg = sum / NUMBER;
    printf("Avergae is %3.2f ", avg);

    return 0;
}
