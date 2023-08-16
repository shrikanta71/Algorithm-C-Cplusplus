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
        sum = sum + (r * r * r);
        n /= 10;
    }

    cout << sum << "\n";

    if (m == sum)
    {
        cout << "armstrong number\n";
    }
    else
    {
        cout << "not armstrong number\n";
    }

    return 0;
}