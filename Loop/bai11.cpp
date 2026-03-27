#include <iostream>
using namespace std;

/**
 *  Công thức: LCM(a, b) = (a × b) / GCD(a, b)
 */

// Hàm tính GCD (Euclid)
long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long lcm = a / gcd(a, b) * b;

    cout << lcm;
    return 0;
}