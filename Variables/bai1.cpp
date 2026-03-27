#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a + b << endl;  // Tong
    cout << a - b << endl;  // Hieu
    cout << a * b << endl;  // Tich

    if (b == 0) {
        cout << "Khong hop le";
    } else {
        cout << a / b << endl;                      // Chia nguyen
        cout << a % b << endl;                      // Chia du
        cout << fixed << setprecision(2)            // Chia thuc
             << (float)a / b;
    }

    return 0;
}