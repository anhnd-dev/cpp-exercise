#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {          // bảng 1 → 9
        for (int j = 1; j <= 9; j++) {      // nhân 1 → 9
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl; // cách dòng giữa các bảng
    }

    return 0;
}