/*
    ĐB: Cho hai số nguyên (có thể âm) có giá trị tuyệt đối không quá 10^6.
    Viết chương trình tính tổng hai số 
    Input:
        Có duy nhất một dòng ghi hai số nguyên, cách nhau một khoảng trống. 
    Output:
        In kết quả trên một 
        
    🔹 Lưu ý:
        Giá trị |a|, |b| ≤ 10^6 → dùng int là đủ
        Không cần xử lý gì thêm (không tràn số)
*/


#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}