#include <iostream>

using namespace std;

int main()
{
    int v1, v2, *p1, *p2, temp;

    cin >> v1 >> v2;

    p1 = &v1;
    p2 = &v2;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << v1 << "\t" << v2;

    return 0;
}