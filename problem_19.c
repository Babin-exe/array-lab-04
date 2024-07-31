#include <stdio.h>
int main()
{
    int r, c;

    printf("Enter the row and column of the matrix:\n");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int b[r][c];
    int count = 0;

    printf("Enter the elements for 1st matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter for [%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements for 2nd matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter for [%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == b[i][j])
            {
                count++;
            }
        }
    }
            if (count == r* c)
            {
                printf("The matrices are equal\n");
            }
            else
            {
                printf("The matrices are not equal\n");
            }
        
    

    return 0;
}