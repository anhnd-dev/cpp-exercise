#include <iostream>
using namespace std;

/**
 *  1. Loop: Độ phức tạp O(n) -> Tốt nhất
 */
  
int main () {
    int n;
    cin >> n;

    long long a = 0, b = 1;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        long long c = a + b;
        a = b;
        b = c;
    }

    return 0; 
}

/**
 *  2. Đệ quy: Độ phức tạp O(2^n) -> Chậm
 */

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}

/**
 *  3. Đệ quy + Memoization: Độ phức tạp O(n) -> Tối ưu
 */

#include <iostream>
using namespace std;

long long f[100];

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (f[n] != -1) return f[n];

    return f[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    // Khởi tạo mảng
    for (int i = 0; i < 100; i++) f[i] = -1;

    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}