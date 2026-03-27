#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double tb = (a + b + c) / 3;

    cout << "TB = " << fixed << setprecision(2) << tb << endl;

    if (tb >= 8) {
        cout << "Gioi";
    } else if (tb >= 6.5) {
        cout << "Kha";
    } else if (tb >= 5) {
        cout << "Trung binh";
    } else {
        cout << "Yeu";
    }
    
    return 0;
}