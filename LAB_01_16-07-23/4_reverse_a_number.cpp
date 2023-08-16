#include <iostream>

using namespace std;

int main()
{
    int n, reverse = 0, m;

    cin >> n;

    m = n;

    while (n > 0)
    {

        int rem = n % 10;

        reverse = reverse * 10 + rem;

        n /= 10;
    }

    cout << reverse;

    return 0;
}