/*
    ĐB: Nhập 2 số nguyên dương a,b không quá 6 chữ số.
    Hãy in ra lần lượt các giá trị: tổng, hiệu, tích, chia phần nguyên, chia phần dư, chia kết quả thực (với đúng 2 chữ số sau dấu phẩy) của 2 số a,b đã cho.
    Mỗi kết quả tính toán ghi trên một dòng
    Input:
        Chỉ có 2 số a,b trên một dòng.
    Output:
        Gồm 6 dòng lần lượt là kết quả của các phép tính theo thứ tự trong mô tả đề bài.
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d\n", a + b); // Tổng
    printf("%d\n", a - b); // Hiệu
    printf("%d\n", a * b); // Tích
    printf("%d\n", a / b); // Chia phần nguyên
    printf("%d\n", a % b); // Chia phần dư
    printf("%.2f\n", (double)a / b); // Chia kết quả thực với 2 chữ số sau dấu phẩy

    return 0;
}