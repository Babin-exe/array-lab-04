#include <stdio.h>
int main()
{
    int a[3][3];
    int sum = 0;
    printf("Enter the array elements:\n");

    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter for [%d] [%d]", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    printf("SUM:%d", sum);

    return 0;
}