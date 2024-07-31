#include <stdio.h>
int main()
{
    int n = 10;

    int store[n];
    int org[1];

    printf("Enter the keyword :");
    scanf("%d", &org[0]);

    printf("Enter any 10 elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d:", i + 1);
        scanf("%d", &store[i]);
    }
    int count = 0;
    int coma[n];
    for (int i = 0; i < n; i++)
    {
        if (store[i] == org[0])

        {
            coma[count] = i;
            count++;
        }
    }
    if (count > 0)
    {
        printf(" The value is contained in index:");
        for (int i = 0; i < count; i++)
        {
            printf("%d", coma[i]);
            if (i < count - 1)
            {
                printf(", ");
            }
        }

        printf("\nThe number is repeated %d times", count);
    }

    else
    {
        printf("Keyword not found \n");
    }

    return 0;
}
