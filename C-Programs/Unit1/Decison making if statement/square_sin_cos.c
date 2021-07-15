#include <stdio.h>
#include <math.h>
int main()
{
    float degree;
    int result;
    printf("Enter degree ");
    scanf("%f", &degree);

    result = (sin(degree) * sin(degree) + cos(degree) * cos(degree));
    printf("The result is %d", result);

    return 0;
}