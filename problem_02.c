#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number number of array elements:");
    scanf("%d", &n);

    int auh[n];
    int nsk[n];
    int aaa[n];

    printf("Enter %d array elements : \n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Element%d: ", i + 1);
        scanf("%d", &auh[i]);
    }
    printf("Enter %d elements for second array\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element%d:", i + 1);
        scanf("%d", &nsk[i]);
    }

    for (int i = 0; i <n; i++)
    {
        aaa[i] = auh[i] + nsk[i];
    }
    printf("Result of array are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("sum of %d Elements is :%d\n", i+1, aaa[i]);
    }

    return 0;
}