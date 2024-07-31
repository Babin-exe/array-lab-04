#include <stdio.h>
int main()
{
    int n = 10;
    int temp;
    int num[n];
    printf("Enter 10 array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Value %d:",i+1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("\nArray elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", num[i]);
    }

    return 0;
}