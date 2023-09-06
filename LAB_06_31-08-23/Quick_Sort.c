#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right)
{

    int pivot = arr[left];

    while (left != right)
    {
        if (pivot == arr[left])
        {
            if (arr[right] > pivot)
            {
                right--;
            }
            else if (arr[right] <= pivot)
            {
                swap(&arr[left], &arr[right]);
                pivot = arr[right];
                left++;
            }
        }
        else if (pivot == arr[right])
        {
            if (arr[left] < pivot)
            {
                left++;
            }
            else if (arr[left] >= pivot)
            {
                swap(&arr[left], &arr[right]);
                pivot = arr[left];
                right--;
            }
        }
    }

    return left;
}

void quick_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pivot = partition(arr, left, right);
        quick_sort(arr, left, pivot - 1);
        quick_sort(arr, pivot + 1, right);
    }
}

void print_array(int arr[], int n)
{
    printf("\n\nThe sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array's elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n\nThe unsorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    quick_sort(arr, 0, n - 1);
    print_array(arr, n);
    return 0;
}