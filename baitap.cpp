#include <stdio.h>
#define MAX 10

typedef int MATRAN[MAX][MAX];

// Hàm nhập ma trận
void nhapMaTran(MATRAN a, int d, int c) {
    for (int i = 0; i < d; i++)
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

// Hàm xuất ma trận
void xuatMaTran(MATRAN a, int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

// Hàm tính tổng hai ma trận
void tongHaiMaTran(MATRAN a, MATRAN b, MATRAN c, int d, int g) {
    for (int i = 0; i < d; i++)
        for (int j = 0; j < g; j++)
            c[i][j] = a[i][j] + b[i][j];
}

// Hàm nhập số dòng và số cột
void nhapSoDongCot(int *d, int *c) {
    do {
        printf("Nhap so dong va so cot (<= %d): ", MAX);
        scanf("%d%d", d, c);
        if (*d <= 0 || *d > MAX || *c <= 0 || *c > MAX)
            printf("Nhap sai, hay nhap lai!\n");
    } while (*d <= 0 || *d > MAX || *c <= 0 || *c > MAX);
}

int main() {
    MATRAN matran1, matran2, matran3;
    int d, c;

    nhapSoDongCot(&d, &c);

    printf("Nhap ma tran thu 1:\n");
    nhapMaTran(matran1, d, c);

    printf("Nhap ma tran thu 2:\n");
    nhapMaTran(matran2, d, c);

    // Tính tổng
    tongHaiMaTran(matran1, matran2, matran3, d, c);

    printf("Tong hai ma tran:\n");
    xuatMaTran(matran3, d, c);

    return 0;
}