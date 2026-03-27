/*
    ĐB: Nhập một số nguyên dương không quá 9 chữ số. Hãy kiểm tra xem đó có phải số chính phương hay không.
    Input:
        Dòng đầu của dữ liệu vào ghi số bộ test, mỗi bộ test ghi một số nguyên dương N.
    Output:
        Ghi ra YES nếu đúng và NO nếu không.
    🔹 Lưu ý:
        Không dùng float ❌ → dễ sai số
        Dùng long long cho chắc
        n ≤ 10^9 → cách này chạy cực nhanh
*/

#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        long long x = sqrt(n);

        if (x * x == n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
