/*
    Viết chương trình tính ước số chung lớn nhất của 2 số nguyên dương (không quá 6 chữ số). 
    Input:
        Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng hai số nguyên dương. 
    Output:
        Mỗi bộ test ghi ra kết quả tính được trên một dòng.
    Mẹo đi thi (rất quan trọng)
        Dùng thuật toán Euclid → nhanh + dễ nhớ
    🔹 Ý tưởng
        GCD(a, b):
        Nếu b = 0 → kết quả là a
        Ngược lại: lặp a = b, b = a % b
*/

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", gcd(a, b));
    }

    return 0;
}