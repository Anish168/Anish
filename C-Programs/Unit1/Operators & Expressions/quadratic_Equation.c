#include <stdio.h>
#include <math.h>
int main()
{
    int b, a, c, root1, root2, discriminant;
    printf("Enter b ");
    scanf("%d", &b);
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter c ");
    scanf("%d", &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        printf("Roots are Imaginary");
    }
    else
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root1 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1=%d", root1);
        printf("root2=%d", root2);
    }
    return 0;
}