#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;

    int n1 = mid - low + 1;
    int n2 = high - mid;

    int leftarr[n1], rightarr[n2];

    for (i = 0; i < n1; i++)
    {
        leftarr[i] = arr[low + i];
    }
    for (j = 0; j < n2; j++)
    {
        rightarr[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = low;

    while (i < n1 && j < n2)
    {
        if (leftarr[i] <= rightarr[j])
        {
            arr[k] = leftarr[i];
            i++;
        }
        else
        {
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }

    while(j>=n2 && i<n1)
    {
        arr[k] = leftarr[i];
        i++;
        k++;
    }
    while(i>=n1 && j<n2)
    {
        arr[k] == rightarr[j];
        j++;
        k++;
    }

    // while (i < n1)
    // {
    //     arr[k] = leftarr[i];
    //     i++;
    //     k++;
    // }
    // while (j < n2)
    // {
    //     arr[k] = rightarr[j];
    //     j++;
    //     k++;
    // }
}

void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    merge_sort(arr, 0, n - 1);

    printf("\n\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}
