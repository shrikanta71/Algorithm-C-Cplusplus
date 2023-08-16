#include <iostream>

using namespace std;

int fibonacci(int i)
{

    if (i == 1)
    {
        return 0;
    }
    else if (i == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(i - 1) + fibonacci(i - 2);
    }
}

int main()
{

    int n, i;

    cin >> n;

    cout << fibonacci(n) << endl; // For only the nth number.

    for (i = 1; i <= n; i++)
    {
        cout << fibonacci(i) << endl; // For the fibonacci series.
    }

    return 0;
}
