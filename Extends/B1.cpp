/*
    ĐB: Cho số nguyên dương N không quá 9 chữ số. Hãy in ra giá trị thập phân 1/N. 
    Input:
        Dòng đầu ghi số bộ test. Mỗi bộ test có duy nhất một số nguyên dương không quá 9 chữ số. 
    Output:
        Với mỗi bộ test, ghi ra kết quả trên một dòng với đúng 15 số sau dấu phẩy.
    🔹 Lưu ý:
        Phải ép 1.0 / n (không phải 1 / n ❌ → sẽ ra 0)
        Dùng:
            C: %.15f
            n ≤ 10^9 → double đủ chính xác
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        printf("%.15f\n", 1.0 / n);
    }

    return 0;
}