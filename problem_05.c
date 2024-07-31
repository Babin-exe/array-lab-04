#include <stdio.h>
int main()
{
    int n = 10;
    int num[n];
    int sum = 0;

    printf("Enter the elements of array:\n\n ");
    for (int i = 0; i < n; i++)
    {
        printf("Element%d:",i+1);
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("The sum of %d elements of an array is: %d ", n, sum);

    return 0;
}