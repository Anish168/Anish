#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter m ");
    scanf("%d", &m);
    printf("Enter n ");
    scanf("%d", &n);
    if (m % n == 0)
    {
        printf("%d is the multiple of %d", m, n);
    }
    else
    {
        printf("%d is not the multiple of %d", m, n);
    }

    return 0;
}