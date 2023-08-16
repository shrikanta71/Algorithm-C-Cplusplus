#include <iostream>

using namespace std;

int main()
{
    int v1, v2, temp;

    cin >> v1 >> v2;

    temp = v1;
    v1 = v2;
    v2 = temp;

    cout << v1 << "\t" << v2;

    return 0;
}