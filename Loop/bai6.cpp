#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    bool isNegative = false;

    // Xử lý số âm
    if (n < 0) {
        isNegative = true;
        n = -n;
    }

    long long rev = 0;

    while (n > 0) {
        rev = rev * 10 + n % 10; // thêm chữ số cuối vào
        n /= 10;                 // bỏ chữ số cuối
    }

    // Nếu ban đầu là số âm → thêm dấu lại
    if (isNegative) rev = -rev;

    cout << rev;
    return 0;
}