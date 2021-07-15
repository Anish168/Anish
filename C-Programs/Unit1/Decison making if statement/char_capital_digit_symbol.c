/*Characters        A – Z       a – z         0 – 9       special symbols
ASCII Values       65 – 90     97 – 122      48 – 57     0 - 47, 58 - 64, 91 - 96, 123 - 127*/

#include <stdio.h>
int main()
{
    char character;
    printf("Enter character ");
    scanf("%c", &character);
    if (character >= 65 && character <= 90)
    {
        printf("The character entered is a capital letter.");
    }
    else if (character >= 97 && character <= 122)
    {
        printf("The character entered is a small letter.");
    }
    else if (character >= 48 && character <= 57)
    {
        printf("The character entered is a digit.");
    }
    else
    {
        printf("The character entered is a special symbols.");
    }
    return 0;
}