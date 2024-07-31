#include <stdio.h>
int main()
{

    int a[2][2];
    int b[2][2];
    int c[2][2];

    printf("Enter the elements for first matrix:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the elements for  [%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements for second matrix:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the elements for  [%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("The sum of two matrices is :\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}