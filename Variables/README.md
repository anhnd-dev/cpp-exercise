## Bài tập

#### Bài 1: Nhập vào 2 số `a` và `b`. In ra tổng, hiệu, tích, chia phần nguyên, chia phần dư và chia kết quả thực (với đúng 2 chữ số sau dấu phẩy). 

**Input:**
- Nhập vào 2 số nguyên `a` và `b`

**Output:**
- In lần lượt:
  - Tổng `a + b`
  - Hiệu `a - b`
  - Tích `a * b`
- Nếu `b ≠ 0`:
  - Thương nguyên `a / b`
  - Phần dư `a % b`
  - Thương thực (2 chữ số sau dấu phẩy)
- Nếu `b = 0`:
  - In `Khong hop le`

**Ví dụ**
| Input | Output        |
|-------|---------------|
| 1 2   | 3             |
|       | -1            |
|       | 2             |
|       | 0             |
|       | 1             |
|       | 0.50          |
| 5 0   | 5             |
|       | 5             |
|       | 0             |
|       | Khong hop le  |
---

**Tham khảo lời giải**: [Code](./bai1.cpp)

#### Bài 2: Nhập bán kính `r`. Tính chu vi và diện tích hình tròn.

**Input:**
- Nhập bán kính `r`

**Output:**
- In ra:
  - Chu vi hình tròn
  - Diện tích hình tròn

**Ví dụ**
| Input | Output        |
|-------|---------------|
| 2     | Chu vi = 12.56|
|       | Dien tich = 12.56 |
---

**Tham khảo lời giải**: [Code](./bai2.cpp)

#### Bài 3: Nhập số giây `n`. Đổi sang giờ:phút:giây.

**Input:**
- Nhập số nguyên `n` (đơn vị: giây)

**Output:**
- In ra thời gian dạng `gio:phut:giay`

**Ví dụ**
| Input | Output |
|-------|--------|
| 3661  | 1:1:1  |
| 60    | 0:1:0  |
| 59    | 0:0:59 |
---

**Tham khảo lời giải**: [Code](./bai3.cpp)

#### Bài 4: Nhập số nguyên `n`. Kiểm tra số chẵn hay lẻ.

**Input:**
- Nhập số nguyên `n`

**Output:**
- Nếu `n` là số chẵn → `So chan`
- Nếu `n` là số lẻ → `So le`

**Ví dụ**
| Input | Output  |
|-------|---------|
| 7     | So le   |
| 10    | So chan |
| 0     | So chan |
---

**Tham khảo lời giải**: [Code](./bai4.cpp)

#### Bài 5: Nhập 3 số `a, b, c`. Tìm số lớn nhất.

**Input:**
- Nhập 3 số `a, b, c`

**Output:**
- In ra số lớn nhất trong ba số

**Ví dụ**
| Input    | Output |
|----------|--------|
| 3 9 5    | 9      |
| 7 7 7    | 7      |
| -1 -5 -3 | -1     |
---

**Tham khảo lời giải**: [Code](./bai5.cpp)

#### Bài 6: Nhập năm `n`. Kiểm tra năm nhuận.

**Input:**
- Nhập một số nguyên `n` (năm)

**Output:**
- Nếu là năm nhuận → `Nam nhuan`
- Ngược lại → `Nam khong nhuan`

**Ví dụ**
| Input | Output          |
|-------|-----------------|
| 2024  | Nam nhuan       |
| 2023  | Nam khong nhuan |
| 2000  | Nam nhuan       |
| 1900  | Nam khong nhuan |
---

**Tham khảo lời giải**: [Code](./bai6.cpp)

#### Bài 7: Nhập 3 điểm. Tính trung bình và xếp loại.

**Input:**
- Nhập 3 điểm

**Output:**
- In ra:
  - Điểm trung bình (TB)
  - Xếp loại:
    - TB ≥ 8 → Gioi
    - TB ≥ 6.5 → Kha
    - TB ≥ 5 → Trung binh
    - TB < 5 → Yeu


**Ví dụ**
| Input  | Output        |
|--------|---------------|
| 8 7 9  | TB = 8        |
|        | Gioi          |
| 6 6 7  | TB = 6.33     |
|        | Kha           |
---

**Tham khảo lời giải**: [Code](./bai7.cpp)

#### Bài 8: Nhập số nguyên `n`. Đảo ngược số.

**Input:**
- Nhập số nguyên `n`

**Output:**
- In ra số sau khi đảo ngược các chữ số của `n`

**Ví dụ**
| Input | Output |
|-------|--------|
| 123   | 321    |
| 120   | 21     |
| 5     | 5      |
---

**Tham khảo lời giải**: [Code](./bai8.cpp)

#### Bài 9: Nhập số nguyên `n`. Tính tổng các chữ số.

**Input:**
- Nhập số nguyên `n`

**Output:**
- In ra tổng các chữ số của `n`

**Ví dụ**
| Input | Output |
|-------|--------|
| 123   | 6      |
| 405   | 9      |
| 0     | 0      |
---

**Tham khảo lời giải**: [Code](./bai9.cpp)

#### Bài 10: Giải phương trình bậc nhất `ax + b = 0`.

**Input:**
- Nhập hai số `a` và `b` 

**Output:**
- In nghiệm của phương trình:
  - Nếu `a = 0, b = 0` → `Vo so nghiem`
  - Nếu `a = 0, b ≠ 0` → `Vo nghiem`
  - Ngược lại → `x = -b / a`

**Ví dụ**
| Input | Output       |
|-------|--------------|
| 2 -4  | x = 2        |
| 0 0   | Vo so nghiem |
| 0 5   | Vo nghiem    |
---


**Tham khảo lời giải**: [Code](./bai10.cpp)
