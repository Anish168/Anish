#include <stdio.h>
int main()
{
    int x=5,y=10,z=15;
    x=y;
    y=z;
    z=x;
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
}