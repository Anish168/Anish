#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter Ram age");
    scanf("%d", &ram);
    printf("Enter Shyam age");
    scanf("%d", &shyam);
    printf("Enter Ajay age");
    scanf("%d", &ajay);

    if (ram < shyam)
    {
        if (ram < ajay)
        {
            printf("Ram is youngest.");
        }
        else
        {
            printf("Ajay is youngest.");
        }
    }
    if (shyam < ram)
    {
        if (shyam < ajay)
        {
            printf("Shyam is youngest.");
        }
    }
}


        //ANOTHER METHODs
/*#include <stdio.h>
int main()
{
   int ram, shyam, ajay;
   printf("Enter Ram age");
   scanf("%d", &ram);
   printf("Enter Shyam age");
   scanf("%d", &shyam);
   printf("Enter Ajay age");
   scanf("%d", &ajay);
   if (ram < shyam && ram < ajay)
   {
      printf("Ram is youngest.");
   }
   else if (shyam < ram && shyam < ajay)
   {
      printf("Shyam is youngest.");
   }
   else
   {
      printf("Ajay is youngest.");
   }
}*/