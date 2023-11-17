#include <stdio.h>
#include <stdlib.h>

int main()
{
    // write content Array
    int taille;
    printf("- Enter the number of elements in the array: ");
    scanf("%d", &taille);

    int arr[taille];
    printf("Enter %d integers:\n", taille);
    int i = 0;
    while (i < taille)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }

    // Array order

    int j, min, tem;
    i = 0;
    while (i < taille)
    {
        min = i;
        j = i + 1;
        while (j < taille)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            j++;
        }
        tem = arr[i];
        arr[i] = arr[min];
        arr[min] = tem;
        i++;
    }
    printf("Arrange numbers from smallest to largest :");
    i = 0;
    while (i < taille)
    {
        printf(" %d", arr[i]);
        i++;
    }
    printf("\n");

    // The item you want

    int x;
    printf("I rechr the number : ");
    scanf("%d", &x);

    // The number of values searched

    int count = 0;
    int posall[taille];

    i = 0;
    while (i < taille)
    {
        if (arr[i] == x)
        {
            posall[count] = i;
            count++;
        }
        i++;
    }

    // Does the number exist or not?

    if (count == 0)
    {
        printf("the number %d not exists\n", x);
        printf("Number of values found: %d\n", count);
    }
    else
    {
        printf("the number %d exists\n", x);
        printf("Number of values found: %d\n", count);
        printf("Positions of the number %d: ", x);
        i = 0;
        while (i < count)
        {
            printf("%d ", posall[i] + 1);
            i++;
        }
        printf("\n");
    }
    getch();
    return 0;
}

// Search on the number

int rechr(int arr[], int x, int size, int taille)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
