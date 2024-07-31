#include <stdio.h>

int main()
{
    int a[2][2];

   
    printf("Enter the array elements:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter element of [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

   
    printf("The array elements are:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d", a[i][j]); 
        }
        printf("\n"); 
    }

    printf("The transpose of the array is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d", a[j][i]); 
        }
        printf("\n"); 
    }

    return 0;
}
