/*
    Viết chương trình kiểm tra một số nguyên dương có phải số nguyên tố hay không.
    Input:
        Dòng đầu của dữ liệu vào ghi số bộ test. Mỗi dòng tiếp theo có một nguyên dương không quá 9 chữ số.
    Output:
        Kết quả in ra YES nếu đó là số nguyên tố, in ra NO nếu ngược lại.
    Mẹo đi thi (rất quan trọng)
        Dùng i * i <= n thay vì sqrt() → nhanh + tránh sai số
        Bỏ số chẵn (i += 2) → nhanh gấp ~2 lần
        n ≤ 10^9 → cách này chạy cực ổn
*/

#include <stdio.h>

int isPrime(long long n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        if (isPrime(n))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}