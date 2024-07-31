#include <stdio.h>
int main()
{
    int n = 100;
    int hka[n];
    printf("Enter the age of 100 persons:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nperson %d:", i + 1);
        scanf("%d", &hka[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (hka[i] >= 16 && hka[i] <= 20)
        {
            count++;
        }
    }

    printf("People betweenn age 16 and 20 are:%d", count);
    return 0;
}