#include <iostream>

using namespace std;

int linear_search(int a[], int n, int data)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == data)
        {
            return i;
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

    int x = linear_search(a, n, data);

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