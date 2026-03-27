#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int sum = 0;

    for (int i = k; i <= n; i += k) {
        sum += i;
    }

    cout << sum;
    return 0;
}