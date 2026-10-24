#include <stdio.h>
int main()
{
    int x;
    int rem;
    printf(" Enter any number:");
    scanf("%d", &x);

    while (x > 0)
    {
        rem = x % 10;
        printf("\n%d", rem);
        x = x / 10;
    }
    return 0;
}