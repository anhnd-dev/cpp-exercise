#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Nếu n âm → lấy giá trị dương
    if (n < 0) n = -n;

    int sum = 0;

    while (n > 0) {
        sum += n % 10; // lấy chữ số cuối
        n /= 10;       // bỏ chữ số cuối
    }

    cout << sum;
    return 0;
}