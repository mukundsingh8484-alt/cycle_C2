#include <stdio.h>
int main()
{
    int search;
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Enter number: ");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            printf("Number found at index %d\n", i);
        }
    }

    return 0;
}
