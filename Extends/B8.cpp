/*
    Viết chương trình phân tích một số nguyên thành các thừa số nguyên tố.  
    Input:
        Dòng đầu ghi số bộ test, mỗi bộ test ghi trên một dòng số nguyên dương cần phân tích (không quá 9 chữ số) .
    Output:
        Kết quả của mỗi bộ test ghi trên một dòng, mỗi thừa số cách nhau một khoảng trống.
    🔹 Ý tưởng (chuẩn thi, nhanh)
        Với số n:
        Chia hết cho 2 → in 2 nhiều lần
        Duyệt i từ 3 → √n (bước 2)
        Nếu còn lại n > 1 → đó là số nguyên tố cuối cùng
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        // xử lý số 2
        while (n % 2 == 0) {
            printf("2 ");
            n /= 2;
        }

        // xử lý số lẻ
        for (long long i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                printf("%lld ", i);
                n /= i;
            }
        }

        // nếu còn lại là số nguyên tố
        if (n > 1) {
            printf("%lld", n);
        }

        printf("\n");
    }

    return 0;
}