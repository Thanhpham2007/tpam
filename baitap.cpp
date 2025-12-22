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




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

// b. Sinh ma trận ngẫu nhiên trong khoảng minN..maxN
void sinhMaTran(MATRAN a, int d, int c, int minN, int maxN) {
    srand((unsigned)time(NULL));
    for (int i = 0; i < d; i++)
        for (int j = 0; j < c; j++)
            a[i][j] = minN + rand() % (maxN + 1 - minN);
}

// c. Xuất ma trận
void xuatMaTran(MATRAN a, int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

// d. Tính tổng biên của ma trận
int tongBien(MATRAN a, int d, int c) {
    int s = 0;
    for (int i = 0; i < d; i++)
        for (int j = 0; j < c; j++)
            if (i == 0 || i == d-1 || j == 0 || j == c-1)
                s += a[i][j];
    return s;
}

// e. Tính trung bình cộng tất cả phần tử
float tbcMaTran(MATRAN a, int d, int c) {
    int s = 0;
    for (int i = 0; i < d; i++)
        for (int j = 0; j < c; j++)
            s += a[i][j];
    return (float)s / (d * c);
}

// f. Kiểm tra ma trận vuông
int laMaTranVuong(int d, int c) {
    return d == c;
}

// g. Tổng hai đường chéo nếu ma trận vuông
int tongDuongCheo(MATRAN a, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i][i] + a[i][n-1-i];
    return s;
}

// h. Sắp xếp tăng dần theo từng dòng
void sapXepTangTheoDong(MATRAN a, int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c-1; j++)
            for (int k = j+1; k < c; k++)
                if (a[i][j] > a[i][k]) {
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
    }
}

// i. Sắp xếp giảm dần toàn bộ ma trận
void sapXepGiamDan(MATRAN a, int d, int c) {
    for (int i = 0; i < d; i++)
        for (int j = 0; j < c; j++)
            for (int x = 0; x < d; x++)
                for (int y = 0; y < c; y++)
                    if (a[i][j] > a[x][y]) {
                        int temp = a[i][j];
                        a[i][j] = a[x][y];
                        a[x][y] = temp;
                    }
}

int main() {
    MATRAN a;
    int d, c, minN = 1, maxN = 20;

    nhapSoDongCot(&d, &c);
    sinhMaTran(a, d, c, minN, maxN);

    printf("\nMa tran vua sinh:\n");
    xuatMaTran(a, d, c);

    printf("\nTong bien ma tran: %d", tongBien(a, d, c));
    printf("\nTrung binh cong ma tran: %.2f", tbcMaTran(a, d, c));

    if (laMaTranVuong(d, c)) {
        printf("\nMa tran la ma tran vuong");
        printf("\nTong hai duong cheo: %d", tongDuongCheo(a, d));
    } else {
        printf("\nMa tran khong phai ma tran vuong");
    }

    sapXepTangTheoDong(a, d, c);
    printf("\n\nMa tran tang dan theo dong:\n");
    xuatMaTran(a, d, c);

    sapXepGiamDan(a, d, c);
    printf("\n\nMa tran giam dan toan bo:\n");
    xuatMaTran(a, d, c);

    return 0;
}




#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char s1[MAX_LEN], s2[MAX_LEN];

    // Nhập hai chuỗi
    printf("Nhap chuoi s1: ");
    scanf("%s", s1);
    printf("Nhap chuoi s2: ");
    scanf("%s", s2);

    // So sánh chuỗi (không phân biệt hoa/thường)
    int result = strcasecmp(s1, s2);

    if (result < 0)
        printf("<\n");
    else if (result > 0)
        printf(">\n");
    else
        printf("=\n");

    return 0;
}




#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char s1[MAX_LEN], s2[MAX_LEN];

    // Nhập hai chuỗi
    printf("Nhap chuoi s1: ");
    gets(s1);  // Lưu ý: gets() đơn giản nhưng nguy hiểm, vẫn dùng cho bài cơ bản
    printf("Nhap chuoi s2: ");
    gets(s2);

    // Nối s2 vào s1 với 1 khoảng trắng
    strcat(s1, " ");
    strcat(s1, s2);

    // In chuỗi kết quả
    printf("Chuoi sau khi noi: %s\n", s1);

    return 0;
}
