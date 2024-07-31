#include <stdio.h>
int main()
{
    int n = 65, min, max;
    int auh[n];
    printf("Enter the marks obtained by stuedents :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d :", i + 1);
        scanf("%d", &auh[i]);
    }
    min = auh[0];
    max = auh[0];

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

    printf("Maximum marks obtained: %d\n", max);
    printf("Minimum marks obtained: %d\n", min);

    return 0;
}