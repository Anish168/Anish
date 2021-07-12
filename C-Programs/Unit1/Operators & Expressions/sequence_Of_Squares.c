#include <stdio.h>
int main()
{
    int start=2,end=100;
    int a=start;
    while (a<end)
    {
        printf("%d\n",a);
        a*=a;
    }
    
}