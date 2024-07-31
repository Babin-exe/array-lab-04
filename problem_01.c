#include <stdio.h>
int main()
{

    int myarray[15];
    int sum = 0;
    float avg;
    printf("Enter  elements:\n");

    for (int i = 0; i < 15; i++)
    {

        printf("person %d:", i + 1);
        scanf("%d", &myarray[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        sum = sum + myarray[i];
    }
    avg = (float)sum / 15;
    printf("The elements of array are : \n");
    for (int i = 0; i < 15; i++)
    {
        printf("\nPerson%d:%d\n", i + 1,myarray[i]);
    }

    printf("\nsum is equals to : %d\n", sum);
    printf("Average : %.2f", avg);

    return 0;
}