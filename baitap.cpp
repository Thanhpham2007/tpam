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