/*
    Cho một số nguyên dương không quá 9 chữ số. Người ta phân tích số đó thành tích các thừa số nguyên tố sau đó tính lại một giá trị mới bằng cách nhân các thừa số nguyên tố khác nhau của số đó. 
    Ví dụ: Số 72 được phân tích thành 2^3 * 3^2. Giá trị tính được sẽ là 2 * 3 = 6 
    Input:
        Dòng đầu ghi số bộ test, không quá 10 Mỗi bộ test là một số nguyên dương không quá 109 
    Output: 
        Với mỗi bộ test, ghi ra kết quả tính được.
    🔹 Ý tưởng
        Ví dụ:
        72 = 2³ × 3²
        👉 Lấy 2 và 3 (không lặp)
        👉 Kết quả = 2 × 3 = 6
    🔹 Cách làm
        Duyệt từ 2 → √n
        Nếu chia hết:
            Nhân vào kết quả 1 lần duy nhất
            Chia hết toàn bộ số đó
            Cuối cùng nếu còn n > 1 → nhân tiếp
    🔹 Mẹo đi thi
        Quan trọng: chỉ nhân 1 lần mỗi số nguyên tố
        Phải dùng while để loại hết số đó
        n > 1 cuối cùng → luôn là số nguyên tố
    Flow tổng quát:
        Nhập n
        ↓
        res = 1
        ↓
        n có chia hết cho 2?
        ├─ Có → res *= 2, chia hết 2
        └─ Không → bỏ qua
        ↓
        Duyệt i từ 3 → √n (i += 2)
            ↓
            n chia hết i?
            ├─ Có → res *= i, chia hết i
            └─ Không → i++
        ↓
        n > 1?
        ├─ Có → res *= n
        └─ Không → bỏ qua
        ↓
        In res
    Ví dụ:
        Bắt đầu
        ↓
        n = 72, res = 1
        ↓
        Kiểm tra 72 % 2 == 0 ✔
        → res = 2
        → n = 72 / 2 = 36
        → n = 36 / 2 = 18
        → n = 18 / 2 = 9
        ↓
        n = 9
        ↓
        Duyệt i = 3
        ↓
        9 % 3 == 0 ✔
        → res = 2 × 3 = 6
        → n = 9 / 3 = 3
        → n = 3 / 3 = 1
        ↓
        n = 1 → dừng
        ↓
        n > 1? ❌
        ↓
        Kết quả: 6
*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        long long res = 1;

        // xử lý số 2
        if (n % 2 == 0) {
            res *= 2;
            while (n % 2 == 0) n /= 2;
        }

        // xử lý số lẻ
        for (long long i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                res *= i;
                while (n % i == 0) n /= i;
            }
        }

        // nếu còn lại là số nguyên tố
        if (n > 1) res *= n;

        printf("%lld\n", res);
    }

    return 0;
}