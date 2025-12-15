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
