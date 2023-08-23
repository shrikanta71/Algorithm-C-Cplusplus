#include <stdio.h>

void insertionSort(int a[], int n)
{
    int i, j;

    for (i = 1; i < n; i++)
    {
        int temp = a[i];

        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {

            a[j + 1] = a[j];

            j--;
        }
        a[j + 1] = temp;
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
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe unsorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }

    insertionSort(a, n);
    printArr(a, n);

    return 0;
}