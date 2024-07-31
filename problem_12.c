#include <stdio.h>

int main()
{
    int n, temp;
    printf("Enter the number of array elements:\n");
    scanf("%d", &n);

    int a[n];
    printf("\nEnter the elements of array :\n");

    for (int i = 0; i < n; i++)
    {
        printf("Element%d: ", i + 1);
        scanf("%d", &a[i]);
    }

   
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

 
    printf("Values in descending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
