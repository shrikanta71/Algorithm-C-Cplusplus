#include <iostream>

using namespace std;

int gcd(int a, int b)
{

    if (a > b)
    {
        gcd(b, a);
    }
    else
    {
        if (a == 0)
        {
            return b;
        }
        else
        {
            return gcd((b - a), a);
        }
    }
}

int main()
{

    int a, b;

    cin >> a >> b;

    cout << "GCD= " << gcd(a, b) << endl;

    return 0;
}