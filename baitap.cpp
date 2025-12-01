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

//printf("Cac so le khong chia het cho 3:\n");
for (int i = 1; i <= n; i++) {
    if (i % 2 != 0 && i % 3 != 0)
        printf("%d ", i);
}




int S1 = 0, S2 = 0;
double S3 = 0, S4;

for (int i = 1; i <= n; i++) {
    S1 += i;                           // S1 = 1 + 2 + ... + n
    S2 += (i % 2 == 0 ? i : -i);        // S2 = -1 + 2 - 3 + 4 - ...
    S3 += (double)i / (i + 1);          // S3 = 1/2 + 2/3 + ... + n/(n+1)
}

S4 = pow(x, n);                         // S4 = x^n

printf("\nS1 = %d", S1);
printf("\nS2 = %d", S2);
printf("\nS3 = %.4f", S3);
printf("\nS4 = %.4f", S4);
