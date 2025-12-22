#include <stdio.h>
#define MAX 10

/// a. Nhập số dòng và số cột
void nhapSoDongCot(int *d, int *c) {
    do {
        printf("Nhap so dong va so cot (1-%d): ", MAX);
        scanf("%d%d", d, c);
        if (*d <= 0 || *d > MAX || *c <= 0 || *c > MAX)
            printf("Nhap sai, hay nhap lai!\n");
    } while (*d <= 0 || *d > MAX || *c <= 0 || *c > MAX);
}

/// b. Nhập ma trận
void nhapMaTran(int a[MAX][MAX], int d, int c) {
    int i, j;
    for (i = 0; i < d; i++)
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

/// c. Xuất ma trận
void xuatMaTran(int a[MAX][MAX], int d, int c) {
    int i, j;
    for (i = 0; i < d; i++) {
        for (j = 0; j < c; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

/// d. Tính tổng ma trận
int tongMaTran(int a[MAX][MAX], int d, int c) {
    int i, j, s = 0;
    for (i = 0; i < d; i++)
        for (j = 0; j < c; j++)
            s += a[i][j];
    return s;
}

/// e. Trung bình cộng ma trận
float tbcMaTran(int a[MAX][MAX], int d, int c) {
    return (float)tongMaTran(a, d, c) / (d * c);
}

/// f. Trung bình cộng phần tử dương
float tbcDuong(int a[MAX][MAX], int d, int c) {
    int i, j, s = 0, dem = 0;
    for (i = 0; i < d; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] > 0) {
                s += a[i][j];
                dem++;
            }
    if (dem == 0) return 0;
    return (float)s / dem;
}

/// g. Xuất dòng k
void xuatDongK(int a[MAX][MAX], int d, int c, int k) {
    int j;
    if (k < 0 || k >= d) {
        printf("Dong khong hop le!\n");
        return;
    }
    for (j = 0; j < c; j++)
        printf("%d ", a[k][j]);
    printf("\n");
}

/// h. Tổng cột k
int tongCotK(int a[MAX][MAX], int d, int c, int k) {
    int i, s = 0;
    if (k < 0 || k >= c) return 0;
    for (i = 0; i < d; i++)
        s += a[i][k];
    return s;
}

/// i. Phần tử lớn nhất
int maxMaTran(int a[MAX][MAX], int d, int c) {
    int i, j, max = a[0][0];
    for (i = 0; i < d; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] > max)
                max = a[i][j];
    return max;
}

/// MAIN
int main() {
    int a[MAX][MAX];
    int d, c, k;

    nhapSoDongCot(&d, &c);
    nhapMaTran(a, d, c);

    printf("\nMa tran vua nhap:\n");
    xuatMaTran(a, d, c);

    printf("\nTong ma tran: %d", tongMaTran(a, d, c));
    printf("\nTrung binh cong: %.2f", tbcMaTran(a, d, c));
    printf("\nTrung binh cong cac phan tu duong: %.2f", tbcDuong(a, d, c));

    printf("\nNhap dong k de xuat: "); 
    scanf("%d", &k);
    printf("Dong k: "); 
    xuatDongK(a, d, c, k);

    printf("Tong cot k: %d\n", tongCotK(a, d, c, k));
    printf("Phan tu lon nhat: %d\n", maxMaTran(a, d, c));

    return 0;
}