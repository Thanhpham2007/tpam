#include <stdio.h>
#define MAX 10
typedef int MATRAN[MAX][MAX];

// a. Nhập số dòng và số cột
void nhapSoDongCot(int *d, int *c) {
    do {
        printf("Nhap so dong va so cot (<= %d): ", MAX);
        scanf("%d%d", d, c);
        if (*d <= 0 || *d > MAX || *c <= 0 || *c > MAX)
            printf("Nhap sai, hay nhap lai!\n");
    } while (*d <= 0 || *d > MAX || *c <= 0 || *c > MAX);
}

// b. Nhập giá trị từng phần tử của ma trận
void nhapMang2C(MATRAN a, int d, int c) {
    for (int i = 0; i < d; i++)
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

// c. Xuất ma trận
void xuatMang2C(MATRAN a, int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

// d. Tính tổng các phần tử
int tongMaTran(MATRAN a, int d, int c) {
    int s = 0;
    for (int i = 0; i < d; i++)
        for (int j = 0; j < c; j++)
            s += a[i][j];
    return s;
}

// e. Trung bình cộng các phần tử
float tbcMaTran(MATRAN a, int d, int c) {
    return (float)tongMaTran(a, d, c) / (d * c);
}

// f. Trung bình cộng các phần tử dương
float tbcDuong(MATRAN a, int d, int c) {
    int s = 0, dem = 0;
    for (int i = 0; i < d; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] > 0) {
                s += a[i][j];
                dem++;
            }
    if (dem == 0) return 0;
    return (float)s / dem;
}

// g. Xuất các phần tử trên dòng k
void xuatDongK(MATRAN a, int d, int c, int k) {
    if (k < 0 || k >= d) {
        printf("Dong khong hop le!\n");
        return;
    }
    for (int j = 0; j < c; j++)
        printf("%d ", a[k][j]);
    printf("\n");
}

// h. Tính tổng các phần tử trên cột k
int tongCotK(MATRAN a, int d, int c, int k) {
    if (k < 0 || k >= c) return 0;
    int s = 0;
    for (int i = 0; i < d; i++)
        s += a[i][k];
    return s;
}

// ================= MAIN =================
int main() {
    MATRAN a;
    int d, c, k;

    nhapSoDongCot(&d, &c);     // a
    nhapMang2C(a, d, c);       // b

    printf("\nMa tran vua nhap:\n");
    xuatMang2C(a, d, c);       // c

    printf("\nTong ma tran: %d\n", tongMaTran(a, d, c));           // d
    printf("Trung binh cong: %.2f\n", tbcMaTran(a, d, c));        // e
    printf("Trung binh cong phan tu duong: %.2f\n", tbcDuong(a, d, c)); // f

    printf("Nhap dong k de xuat: "); scanf("%d", &k);
    printf("Dong k: "); xuatDongK(a, d, c, k);                    // g
    printf("Tong cot k: %d\n", tongCotK(a, d, c, k));             // h

    return 0;
}