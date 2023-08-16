#include <iostream>

using namespace std;

int binary_search(int a[], int n, int data)
{
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (data == a[mid])
        {
            return mid;
        }
        else if (data > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int data, n;
    cout << "Enter the array size: ";
    cin >> n;

    int a[n];
    cout << "Enter the array in ascending  order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the data you want to search: ";
    cin >> data;

    int x = binary_search(a, n, data);

    if (x == -1)
    {
        cout << "The data is not found." << endl;
    }
    else
    {
        cout << "The data found at " << x << "th index." << endl;
    }

    return 0;
}