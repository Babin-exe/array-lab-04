#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int auh[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);

        scanf("%d", &auh[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (auh[i] % 2 == 0)
        {
            printf("Even : %d\n", auh[i]);
        }
        else
        {
            printf("Odd : %d\n", auh[i]);
        }
    }


return 0;
}