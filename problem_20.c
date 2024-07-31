#include <stdio.h>

int main()
{
    int arow = 2, acol = 3;
    int brow = 3, bcol = 2;
    int crow = 2, ccol = 2;

    int a[arow][acol];
    int b[brow][bcol];
    int c[crow][ccol];

    printf("Enter the elements of 1st matrix:\n");
    for (int i = 0; i < arow; i++)
    {
        for (int j = 0; j < acol; j++)
        {
            printf("Enter element for [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix:\n");
    for (int i = 0; i < brow; i++)
    {
        for (int j = 0; j < bcol; j++)
        {
            printf("Enter element for [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    if (acol != brow)
    {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    for (int i = 0; i < crow; i++)
    {
        for (int j = 0; j < ccol; j++)
        {
            c[i][j] = 0;
        }
    }

    for (int i = 0; i < arow; i++)
    {
        for (int j = 0; j < bcol; j++)
        {
            for (int k = 0; k < acol; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the 2 matrices is:\n");
    for (int i = 0; i < crow; i++)
    {
        for (int j = 0; j < ccol; j++)
        {
            printf("%4d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
