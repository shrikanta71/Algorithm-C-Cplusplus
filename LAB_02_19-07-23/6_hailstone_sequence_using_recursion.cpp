#include <iostream>

using namespace std;

int hailstone(int n)
{

    while (n > 0)
    {

        if (n == 1)
        {
            cout << 1 << endl;
            return (n - 1);
        }
        else if (n % 2 == 0)
        {
            cout << n << endl;
            return hailstone(n / 2);
        }
        else
        {
            cout << n << endl;
            return hailstone((3 * n) + 1);
        }
    }
}

int main()
{

    int n;

    cin >> n;

    hailstone(n);

    return 0;
}