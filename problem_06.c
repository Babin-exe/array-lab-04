#include <stdio.h>
int main()
{
    int n = 10, min, max;
    int auh[n];

    printf("\nArray inputs:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element%d:", i + 1);
        scanf("%d", &auh[i]);
    }
    max = auh[0];
    min = auh[0];
    for (int i = 0; i < n; i++)
    {
        if (auh[i] > max)
        {
            max = auh[i];
        }
        if (auh[i] < min)
        {
            min = auh[i];
        }
    }
    printf("Max: %d", max);
    printf("\nMin: %d", min);
    return 0;
}