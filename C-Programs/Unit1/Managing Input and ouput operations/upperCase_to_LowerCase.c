#include <stdio.h>
#include <ctype.h> /*If you're using the standard islower and isalpha, then somewhere at the top you should see*/

#include <ctype.h>
int main()
{
    char character;
    printf("Enter character ");
    character = getchar();
    if (isupper(character))
    {
        printf("%c",tolower(character));
    }
   else
    {
        printf("%c",toupper(character));
    }
    
}