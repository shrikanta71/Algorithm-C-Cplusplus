#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, m;

    cin >> n;

    m = n;

    while (n > 0)
    {

        int r = n % 10;
        sum = sum * 10 + r;
        n /= 10;
    }

    cout << sum << "\n";

    if (m == sum)
    {
        cout << "Palindromic number\n";
    }
    else
    {
        cout << "Not Palindromic number\n";
    }

    return 0;
}