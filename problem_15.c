#include <stdio.h>
int main()
{

    int a[3][4];
    int sum = 0;
    printf("Enter the elements of array :\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter for [%d] [%d]", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] % 2 == 0)
            {
                sum += a[i][j];
            }
        }
    }
    printf("sum of all even numbers :%d", sum);
    return 0;
}