#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int gio = n / 3600;
    int phut = (n % 3600) / 60;
    int giay = n % 60;

    cout << gio << ":" << phut << ":" << giay;

    return 0;
}