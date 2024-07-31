#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of employees : \n");
    scanf("%d", &n);

    int auh[n];

    printf("Enter the salary :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee%d:", i + 1);
        scanf("%d", &auh[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (auh[i] > 20000)
        {
            count++;
        }
    }
    printf("Employees earning more than 20000 is : %d", count);

    return 0;
}