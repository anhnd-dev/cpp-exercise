/*
    ĐB: Viết chương trình nhập vào một số n không quá 10^9, thực hiện tìm tổng các chữ số của n và in ra màn hình.
    Input:
        Chỉ có một dòng ghi số n.
    Output:
        Ghi ra kết quả tính toán
*/

#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Lấy chữ số cuối cùng và cộng vào tổng
        n /= 10; // Loại bỏ chữ số cuối cùng
    }

    printf("%d\n", sum);
    return 0;
}