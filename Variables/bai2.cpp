#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cin >> r;

    const double PI = 3.14;

    double chuVi = 2 * PI * r;
    double dienTich = PI * r * r;

    cout << fixed << setprecision(2);
    cout << "Chu vi = " << chuVi << endl;
    cout << "Dien tich = " << dienTich;

    return 0;
}