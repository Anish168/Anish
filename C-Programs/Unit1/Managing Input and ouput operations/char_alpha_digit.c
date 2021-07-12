#include <stdio.h>
#include <ctype.h>  //These character functions are contained in the file ctype.h
int main()
{
    char character;
    printf("Enter character ");
    character = getchar();      //The function that receives a single character from the keyboard.
    if (isalpha(character))
    {
        printf("The character is an aplhabet");
    }
    else if (isdigit(character))
    {
        printf("The character is a digit");
    }
    else
    {
        printf("The character is an aplhnumeric");
    }
}