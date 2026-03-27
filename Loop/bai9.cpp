#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long temp = n, rev = 0;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    cout << (rev == n ? "YES" : "NO");

    return 0;
}