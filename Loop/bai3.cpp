#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int count = 0;

    // Trường hợp n = 0 (đặc biệt)
    if (n == 0) {
        count = 1;
    } else {
        // Nếu n âm thì lấy giá trị tuyệt đối
        if (n < 0) n = -n;

        while (n > 0) {
            n /= 10;
            count++;
        }
    }

    cout << count;
    return 0;
}