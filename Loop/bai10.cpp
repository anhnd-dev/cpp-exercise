#include <iostream>
using namespace std;

/**
 *  1. Loop
 */
int main()
{
    long long a, b;
    cin >> a >> b;

    // Đưa về số dương
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    // Thuật toán Euclid
    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }

    cout << a;
    return 0;
}

/**
 *  2. Đệ quy
 */

#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    long long a, b;
    cin >> a >> b;

    cout << gcd(a, b);
    return 0;
}