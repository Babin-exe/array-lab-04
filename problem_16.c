#include <stdio.h>
int main()
{

    int a[4][4];
    int sum = 0;

    printf("Enter the elements of array:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the element for [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }
    printf("sum of diagonal elements: %d\n", sum);
    return 0;
}