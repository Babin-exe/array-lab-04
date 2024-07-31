#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;

    printf("Enter the number of rows and column for 1st matrix:\n");
    scanf("%d%d", &r1, &c1);

    int a[r1][c1];

    printf("Enter the number of rows and column for 2nd matrix:\n");
    scanf("%d%d", &r2, &c2);

    int b[r2][c2];

    printf("Enter the elements of 1st matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Elements [%d][%d]:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Elements [%d][%d]:\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    if (c1 != r2)
    {
        printf("Invalid input ");
        return 1;
    }
    int c[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
