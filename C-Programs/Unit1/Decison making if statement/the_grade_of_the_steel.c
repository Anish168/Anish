/*(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 560076 Let Us C
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met*/

#include <stdio.h>
int main()
{
    int hardness,tensil;
    float carbon;;
    printf("Enter Hardness ");
    scanf("%d",&hardness);
    printf("Enter carbon ");
    scanf("%f",&carbon);
    printf("Enter tensil ");
    scanf("%d",&tensil);

    if (hardness>50 && carbon<0.7 && tensil>560076)
    {
        printf("Grade 10 ");
    }

    else if (hardness>50 && carbon<0.7)
    {
        printf("Grade 9 ");
    }

    else if (carbon<0.7 && tensil>560076)
    {
        printf("Grade 8 ");
    }

    else if (hardness>50 && tensil>560076)
    {
        printf("Grade 7 ");
    }
    
    else if (hardness>50 || carbon<0.7 || tensil>560076)
    {
        printf("Grade 6 ");
    }

    else
    {
        printf("Grade 5 ");
    }
    return 0;
}