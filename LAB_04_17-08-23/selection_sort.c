#include <stdio.h>

void selectionSort(int a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        int min = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

void printArr(int a[], int n)
{
    printf("\n\nThe sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n\n");
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("\nEnter the array's elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe unsorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }

    selectionSort(a, n);
    printArr(a, n);

    return 0;
}