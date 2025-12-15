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