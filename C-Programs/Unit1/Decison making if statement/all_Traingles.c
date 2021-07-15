/*the triangle is isosceles, 
equilateral, scalene or right angled triangle.*/

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter Side 1 ");
    scanf("%d", &side1);
    printf("Enter Side 2 ");
    scanf("%d", &side2);
    printf("Enter Side 3 ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("Given sides are show Equilateral Triangle.");
    }

    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("Given sides are show Isosceles Triangle.");
    }

    else if (side1 != side2 && side2 != side3 && side3 != side1)
    {
        printf("Given sides are show Scalene Triangle.");
    }

    else
    {
        printf("Given sides are show Right Triangle.");
    }
    
}