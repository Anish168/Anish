#include <stdio.h>
int main()
{
    int date, month;
    printf("Enter date ");
    scanf("%d", &date);
    printf("Enter month ");
    scanf("%d", &month);

    if (month == 12 && date >= 22 && date <= 31 || month == 1 && date >= 1 && date <= 19)
    {
        printf("Your zodiac sign is Capricorn.");
    }

    else if (month == 1 && date >= 20 && date <= 31 || month == 2 && date >= 1 && date <= 17)
    {
        printf("Your zodiac sign is Aquarius.");
    }

    else if (month == 2 && date >= 18 && date <= 29 || month == 3 && date >= 1 && date <= 19)
    {
        printf("Your zodiac sign is Pisces.");
    }

    else if (month == 3 && date >= 20 && date <= 31 || month == 4 && date >= 1 && date <= 19)
    {
        printf("Your zodiac sign is Aries.");
    }

    else if (month == 4 && date >= 20 && date <= 30 || month == 5 && date >= 1 && date <= 20)
    {
        printf("Your zodiac sign is Taurus.");
    }

    else if (month == 5 && date >= 21 && date <= 31 || month == 6 && date >= 1 && date <= 20)
    {
        printf("Your zodiac sign is Gemini.");
    }

    else if (month == 6 && date >= 21 && date <= 30 || month == 7 && date >= 1 && date <= 22)
    {
        printf("Your zodiac sign is Cancer.");
    }

    else if (month == 7 && date >= 23 && date <= 31 || month == 8 && date >= 1 && date <= 22)
    {
        printf("Your zodiac sign is Leo.");
    }

    else if (month == 8 && date >= 23 && date <= 31 || month == 9 && date >= 1 && date <= 22)
    {
        printf("Your zodiac sign is Virgo.");
    }

    else if (month == 9 && date >= 23 && date <= 30 || month == 10 && date >= 1 && date <= 22)
    {
        printf("Your zodiac sign is Libra.");
    }

    else if (month == 10 && date >= 23 && date <= 31 || month == 11 && date >= 1 && date <= 21)
    {
        printf("Your zodiac sign is Scorpio.");
    }

    else if (month == 11 && date >= 22 && date <= 30 || month == 12 && date >= 1 && date <= 21)
    {
        printf("Your zodiac sign is Sagittarius.");
    }
    return 0;
}