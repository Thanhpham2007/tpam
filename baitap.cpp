#include <stdio.h>

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac so tu 1 den %d:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}


//printf("Cac so chan tu 1 den %d:\n", n);
for (int i = 1; i <= n; i++) {
    if (i % 2 == 0)
        printf("%d ", i);
}