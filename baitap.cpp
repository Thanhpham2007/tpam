//a
#include <stdio.h>

void nhapSoNguyen(int *n) {
    do {
        printf("Nhap n: ");
        scanf("%d", n);
    } while (*n <= 0 || *n >= 100);
}

int main() {
    int n;
    nhapSoNguyen(&n);
    printf("n = %d", n);
    return 0;
}

//b
#include <stdio.h>

int KTNT(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    if (KTNT(n))
        printf("La so nguyen to");
    else
        printf("Khong la so nguyen to");

    return 0;
}

//c
#include <stdio.h>

int KTNT(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;
    return 1;
}

void lietKeNT(int n) {
    int i;
    for (i = 1; i <= n; i++)
        if (KTNT(i))
            printf("%d ", i);
}

int main() {
    int n;
    scanf("%d", &n);
    lietKeNT(n);
    return 0;
}

//d
#include <stdio.h>

int KTNT(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;
    return 1;
}

void demNT(int n) {
    int i, dem = 0;
    for (i = 1; i <= n; i++)
        if (KTNT(i)) {
            printf("%d ", i);   // ✅ in số nguyên tố
            dem++;              // ✅ đếm
        }
    printf("\nSo luong: %d", dem);
}

int main() {
    int n;
    scanf("%d", &n);
    demNT(n);
    return 0;
}
//e
#include <stdio.h>

int KTNT(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;
    return 1;
}

void tongNT(int n) {
    int i, tong = 0;
    for (i = 1; i <= n; i++)
        if (KTNT(i))
            tong += i;
    printf("%d", tong);
}

int main() {
    int n;
    scanf("%d", &n);
    tongNT(n);
    return 0;
}

//f
#include <stdio.h>

int KTNT(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;
    return 1;
}

void tbcNT(int n) {
    int i, tong = 0, dem = 0;
    for (i = 1; i <= n; i++)
        if (KTNT(i)) {
            tong += i;
            dem++;
        }
    if (dem == 0) printf("0");
    else printf("%.2f", (float)tong / dem);
}

int main() {
    int n;
    scanf("%d", &n);
    tbcNT(n);
    return 0;
}


#include <stdio.h>

int main() {
    float a, b;
    char ch;

    scanf("%f%c%f", &a, &ch, &b);

    if (ch == '+') printf("%.2f", a + b);
    else if (ch == '-') printf("%.2f", a - b);
    else if (ch == '*') printf("%.2f", a * b);
    else if (ch == '/') printf("%.2f", a / b);

    return 0;
}

//cau 6
#include <stdio.h>

int laSoChinhPhuong(int n) {
    int i;
    for (i = 0; i * i <= n; i++) {
        if (i * i == n)
            return 1; // là số chính phương
    }
    return 0; // không phải
}

int main() {
    int n;
    scanf("%d", &n);

    if (laSoChinhPhuong(n))
        printf("La so chinh phuong");
    else
        printf("Khong la so chinh phuong");

    return 0;
}
//cau 7
#include <stdio.h>
#include <math.h>

int laSoChinhPhuong(int n) {
    int x = sqrt(n);
    return x * x == n;
}

void lietKe(int n) {
    int i;
    for (i = 1; i <= n; i++)
        if (laSoChinhPhuong(i))
            printf("%d ", i);
}

int main() {
    int n;
    scanf("%d", &n);
    lietKe(n);
    return 0;
}

// cau 9
#include <stdio.h>
#include <stdlib.h>

int tongChuSoChan(long long n) {
    if (n < 0) n = -n;       // xử lý số âm
    int tong = 0;
    if (n == 0) return 0;    // nếu n = 0 thì trả về 0
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) tong += d;
        n /= 10;
    }
    return tong;
}

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    printf("%d\n", tongChuSoChan(n));
    return 0;
}

//cau 10
#include <stdio.h>

int giamDan(int n) {
    int sau = 10, truoc;
    while (n > 0) {
        truoc = n % 10;
        if (truoc > sau) return 0;
        sau = truoc;
        n /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if (giamDan(n))
        printf("Giam dan");
    else
        printf("Khong giam dan");
    return 0;
}

//cau 8
#include <stdio.h>

void thongTinHS() {
    char hoten[50];
    float toan, van, anh, tb;

    gets(hoten);
    scanf("%f%f%f", &toan, &van, &anh);

    tb = (toan + van + anh) / 3;

    printf("%s - %.2f - ", hoten, tb);

    if (tb >= 8)
        printf("Gioi");
    else if (tb >= 6.5)
        printf("Kha");
    else if (tb >= 5)
        printf("Trung binh");
    else
        printf("Yeu");
}

int main() {
    thongTinHS();
    return 0;
}