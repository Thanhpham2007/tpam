#include <stdio.h>

#define MAX 100

void nhapSL(int *n)
{
    do {
        printf("Nhap so phan tu (0 < n <= 100): ");
        scanf("%d", n);
    } while (*n <= 0 || *n > 100);
}

void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n)
{
    printf("\nMang gom cac phan tu:\n");
    for (int i = 0; i < n; i++)
        printf("%5d", a[i]);
}

int main()
{
    int a[MAX], n;

    nhapSL(&n);
    nhapMang(a, n);
    xuatMang(a, n);

    return 0;
}



#include <stdio.h>

#define MAX 100

void nhapSL(int *n)
{
    do {
        printf("Nhap so phan tu (0 < n <= 100): ");
        scanf("%d", n);
    } while (*n <= 0 || *n > 100);
}

void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n)
{
    printf("\nMang gom cac phan tu:\n");
    for (int i = 0; i < n; i++)
        printf("%5d", a[i]);
}

int main()
{
    int a[MAX], n, i;

    nhapSL(&n);
    nhapMang(a, n);
    xuatMang(a, n);

    /* a. Xuất các phần tử chia hết cho 3 */
    printf("\n\nCac phan tu chia het cho 3:\n");
    for (i = 0; i < n; i++)
        if (a[i] % 3 == 0)
            printf("%5d", a[i]);

    /* b. Đếm số lượng số dương */
    int demDuong = 0;
    for (i = 0; i < n; i++)
        if (a[i] > 0)
            demDuong++;
    printf("\nSo luong so duong: %d", demDuong);

    /* c. Tính tổng các số trong mảng */
    int tong = 0;
    for (i = 0; i < n; i++)
        tong += a[i];
    printf("\nTong cac so trong mang: %d", tong);

    /* d. Trung bình cộng của mảng */
    printf("\nTrung binh cong mang: %.2f", (float)tong / n);

    /* e. Trung bình cộng các phần tử dương */
    int tongDuong = 0;
    for (i = 0; i < n; i++)
        if (a[i] > 0)
            tongDuong += a[i];
    if (demDuong > 0)
        printf("\nTBC cac phan tu duong: %.2f", (float)tongDuong / demDuong);

    /* f. Xuất các số nguyên tố */
    printf("\n\nCac so nguyen to trong mang:\n");
    int demNT = 0, tongNT = 0;
    for (i = 0; i < n; i++)
    {
        int j, laNT = 1;
        if (a[i] < 2) laNT = 0;
        for (j = 2; j * j <= a[i]; j++)
            if (a[i] % j == 0)
                laNT = 0;

        if (laNT)
        {
            printf("%5d", a[i]);
            demNT++;
            tongNT += a[i];
        }
    }

    /* g. Đếm số nguyên tố */
    printf("\nSo luong so nguyen to: %d", demNT);

    /* h. Tổng các số nguyên tố */
    printf("\nTong cac so nguyen to: %d", tongNT);

    /* i. Trung bình cộng các số nguyên tố */
    if (demNT > 0)
        printf("\nTBC cac so nguyen to: %.2f", (float)tongNT / demNT);

    /* j. Phần tử dương đầu tiên */
    int coDuong = 0;
    for (i = 0; i < n; i++)
        if (a[i] > 0)
        {
            printf("\nSo duong dau tien: %d", a[i]);
            coDuong = 1;
            break;
        }
    if (!coDuong)
        printf("\nMang khong chua so duong");

    /* k. Phần tử âm cuối cùng */
    int coAm = 0;
    for (i = n - 1; i >= 0; i--)
        if (a[i] < 0)
        {
            printf("\nSo am cuoi cung: %d", a[i]);
            coAm = 1;
            break;
        }
    if (!coAm)
        printf("\nMang khong chua so am");

    /* l. Phần tử lớn nhất và nhỏ nhất */
    int max = a[0], min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("\nGia tri lon nhat: %d", max);
    printf("\nGia tri nho nhat: %d", min);

    /* m. Kiểm tra mảng đối xứng */
    int doiXung = 1;
    for (i = 0; i < n / 2; i++)
        if (a[i] != a[n - 1 - i])
            doiXung = 0;

    if (doiXung)
        printf("\nMang doi xung");
    else
        printf("\nMang khong doi xung");

    return 0;
}





#include <stdio.h>

#define MAX 100

// Nhập số phần tử
void nhapSL(int *n)
{
    do {
        printf("Nhap so phan tu (3 <= n <= 20): ");
        scanf("%d", n);
    } while (*n < 3 || *n > 20);
}

// Nhập mảng
void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// Xuất mảng
void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%5d", a[i]);
}

// b. Thêm phần tử d ở đầu mảng
void themDau(int a[], int *n, int d)
{
    (*n)++;
    for (int i = *n - 1; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = d;
}

// c. Thêm phần tử c ở cuối mảng
void themCuoi(int a[], int *n, int c)
{
    a[*n] = c;
    (*n)++;
}

// d. Thêm phần tử t tại vị trí k
void themTaiK(int a[], int *n, int k, int t)
{
    if (k < 0 || k >= *n)
        return;

    (*n)++;
    for (int i = *n - 1; i > k; i--)
        a[i] = a[i - 1];
    a[k] = t;
}

// e. Xoá phần tử đầu tiên
void xoaDau(int a[], int *n)
{
    for (int i = 0; i < *n - 1; i++)
        a[i] = a[i + 1];
    (*n)--;
}

// f. Xoá phần tử cuối cùng
void xoaCuoi(int *n)
{
    (*n)--;
}

// g. Xoá phần tử tại vị trí k
void xoaTaiK(int a[], int *n, int k)
{
    if (k < 0 || k >= *n)
        return;

    for (int i = k; i < *n - 1; i++)
        a[i] = a[i + 1];
    (*n)--;
}

int main()
{
    int a[MAX], n;
    int d, c, t, k;

    nhapSL(&n);
    nhapMang(a, n);

    printf("\nMang ban dau:\n");
    xuatMang(a, n);

    // b
    printf("\n\nNhap d (them dau): ");
    scanf("%d", &d);
    themDau(a, &n, d);
    xuatMang(a, n);

    // c
    printf("\n\nNhap c (them cuoi): ");
    scanf("%d", &c);
    themCuoi(a, &n, c);
    xuatMang(a, n);

    // d
    printf("\n\nNhap k va t (them tai k): ");
    scanf("%d%d", &k, &t);
    themTaiK(a, &n, k, t);
    xuatMang(a, n);

    // e
    printf("\n\nXoa phan tu dau:\n");
    xoaDau(a, &n);
    xuatMang(a, n);

    // f
    printf("\n\nXoa phan tu cuoi:\n");
    xoaCuoi(&n);
    xuatMang(a, n);

    // g
    printf("\n\nNhap k (xoa tai k): ");
    scanf("%d", &k);
    xoaTaiK(a, &n, k);
    xuatMang(a, n);

    return 0;
}





#include <stdio.h>
#include <math.h>

#define MAX 100

int trung(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x) return 1;
    return 0;
}

void nhap(int a[], int *n)
{
    printf("Nhap n: ");
    scanf("%d", n);
    for (int i = 0; i < *n; )
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if (trung(a, i, a[i]))
            printf("Trung, nhap lai!\n");
        else i++;
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%5d", a[i]);
}

void chinhPhuongLe(int a[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        int x = sqrt(a[i]);
        if (x * x == a[i])
            printf("%5d", a[i]);
    }
}

void viTriMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max) max = a[i];

    for (int i = 0; i < n; i++)
        if (a[i] == max)
            printf("%d ", i);
}

int tongChan(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i += 2)
        s += a[i];
    return s;
}

void sapXep(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

int main()
{
    int a[MAX], n = 0, chon;

    do {
        printf("\n1.Nhap  2.Xuat  3.CP le  4.VT max  5.Tong chan  6.Sap xep  0.Thoat\n");
        scanf("%d", &chon);

        if (chon == 1) nhap(a, &n);
        if (chon == 2) xuat(a, n);
        if (chon == 3) chinhPhuongLe(a, n);
        if (chon == 4) viTriMax(a, n);
        if (chon == 5) printf("%d", tongChan(a, n));
        if (chon == 6) { sapXep(a, n); xuat(a, n); }

    } while (chon != 0);

    return 0;
}








#include <stdio.h>
#define MAX 100

int main()
{
    float a[MAX], s = 0, max;
    int n, dem = 0, vt = -1;

    // a. Nhập mảng
    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }

    // b. Xuất mảng
    printf("\nMang: ");
    for (int i = 0; i < n; i++)
        printf("%8.2f", a[i]);

    // c. TBC phần tử âm
    for (int i = 0; i < n; i++)
        if (a[i] < 0)
        {
            s += a[i];
            dem++;
            if (vt == -1) vt = i;
        }

    if (dem == 0)
        printf("\nKhong co phan tu am nao trong mang");
    else
        printf("\nTBC phan tu am: %.2f", s / dem);

    // d. Vị trí âm đầu tiên
    if (vt != -1)
        printf("\nVi tri am dau tien: %d", vt);

    // e. Kiểm tra đối xứng
    int dx = 1;
    for (int i = 0; i < n / 2; i++)
        if (a[i] != a[n - i - 1])
            dx = 0;

    printf("\nMang %s doi xung", dx ? "la" : "khong");

    // f. Vị trí phần tử lớn nhất
    max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max) max = a[i];

    printf("\nVi tri phan tu lon nhat: ");
    for (int i = 0; i < n; i++)
        if (a[i] == max)
            printf("%d ", i);

    return 0;
}
