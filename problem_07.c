#include <stdio.h>
int main()
{
    int n, min, max;
    printf("Enter the number of ages :");
    scanf("%d", &n);
    int age[n];
    printf("Enter the ages :\n");
    for (int i = 0; i < n; i++)
    {
        printf("person%d:\n", i + 1);
        scanf("%d", &age[i]);
    }
    min = age[0];
    max = age[0];
    for (int i = 0; i < n; i++)
    {
        if (age[i] > max)
        {
            max = age[i];
        }
        if (age[i] < min)
        {
            min = age[i];
        }
    }
    printf("Maximum age : %d\n", max);
    printf("Minimum age : %d\n", min);
    return 0;
}