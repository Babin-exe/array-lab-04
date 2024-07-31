#include <stdio.h>
int main()
{
    int r, c;

    printf("Enter the row and column required :\n");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int b[r][c];
    int d[r][c];

    printf("Enter the elements for first matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element [%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements for second matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element [%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("\nThe sum of two matrices is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            d[i][j] = a[i][j] + b[i][j];
        }

    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%4d", d[i][j]);
        }
        printf("\n");

    }
        return 0;
}