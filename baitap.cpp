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




#include <stdio.h>

int main() {
    int n, i;
    int S1 = 0, S2 = 0;
    double S3 = 0, S4;
    int sumDigits = 0, temp;
    int x; // dùng int cho đơn giản

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Nhap x: ");
    scanf("%d", &x);

    // a) In 1 -> n
    printf("Cac so tu 1 den %d:\n", n);
    for(i=1; i<=n; i++)
        printf("%d ", i);

    // b) So chan
    printf("\nCac so chan:\n");
    for(i=1; i<=n; i++)
        if(i%2==0) printf("%d ", i);

    // c) So le khong chia het cho 3
    printf("\nCac so le khong chia het cho 3:\n");
    for(i=1; i<=n; i++)
        if(i%2!=0 && i%3!=0) printf("%d ", i);

    // d1) S1 = 1 + 2 + ... + n
    for(i=1; i<=n; i++) S1 += i;

    // d2) S2 = -1 +2 -3 +4 -5 ...
    for(i=1; i<=n; i++)
        if(i%2==0) S2 += i;
        else S2 -= i;

    // d3) S3 = 1/2 + 2/3 + ... + n/(n+1)
    for(i=1; i<=n; i++)
        S3 += (double)i/(i+1);

    // d4) S4 = x^n (tính bằng vòng lặp)
    S4 = 1;
    for(i=1; i<=n; i++)
        S4 *= x;

    printf("\nS1 = %d", S1);
    printf("\nS2 = %d", S2);
    printf("\nS3 = %.4f", S3);
    printf("\nS4 = %.0f", S4);

    // e) Tong cac chu so cua n
    temp = n;
    while(temp>0){
        sumDigits += temp%10;
        temp /= 10;
    }
    printf("\nTong cac chu so cua n = %d\n", sumDigits);

    return 0;
}


#include <stdio.h>

int main() {
    int n, tong = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    while(n > 0) {
        tong += n % 10;  // Lấy chữ số cuối cùng và cộng vào tong
        n /= 10;          // Bỏ chữ số vừa lấy
    }

    printf("Tong cac chu so = %d\n", tong);

    return 0;
}





#include <stdio.h>

int main() {
    int n;

    // a) Nhập n, 0 < n <= 100, nhập lại nếu sai
    do {
        printf("Nhap n (0 < n <= 100): ");
        scanf("%d", &n);
    } while(n <= 0 || n > 100);

    // b) Đếm số ước của n
    int dem = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) dem++;
    }

    if(dem == 2)
        printf("%d la so nguyen to\n", n);
    else
        printf("%d khong phai la so nguyen to\n", n);

    // c) Tính tổng các ước (không tính chính nó)
    int tong = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0)
            tong += i;
    }

    if(tong == n)
        printf("%d la so hoan thien\n", n);
    else
        printf("%d khong la so hoan thien\n", n);

    return 0;
}


#include <stdio.h>

int main() {
    int n;

    // a) Nhập n > 0
    do {
        printf("Nhap n (>0): ");
        scanf("%d", &n);
    } while(n <= 0);

    int count = 0;   // Đếm số lượng số nguyên tố
    int sum = 0;     // Tổng các số nguyên tố

    printf("Cac so nguyen to tu 2 den %d:\n", n);

    // b) Liệt kê các số nguyên tố từ 2 đến n
    for(int i = 2; i <= n; i++) {
        int dem = 0;  // Số ước của i
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) dem++;
        }
        if(dem == 2) {      // i là số nguyên tố
            printf("%d ", i);
            count++;         // c) Đếm số lượng số nguyên tố
            sum += i;        // d) Cộng vào tổng
        }
    }

    printf("\nSo luong so nguyen to: %d", count);
    printf("\nTong cac so nguyen to: %d\n", sum);

    return 0;
}







#include <stdio.h>

int main() {
    int n;

    // a. Nhập n > 0
    do {
        printf("Nhap n (>0): ");
        scanf("%d", &n);
    } while (n <= 0);

    int i, j;
    int dem = 0;     // đếm số nguyên tố
    int tong = 0;    // tổng số nguyên tố

    // b, c, d: duyệt từ 2 đến n
    printf("Cac so nguyen to tu 2 den %d la: ", n);

    for (i = 2; i <= n; i++) {
        int laNguyenTo = 1;    // mặc định là nguyên tố

        // kiểm tra i có phải nguyên tố?
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                laNguyenTo = 0;
                break;
            }
        }

        if (laNguyenTo == 1) {
            printf("%d ", i);  // liệt kê
            dem++;            // đếm
            tong += i;        // cộng tổng
        }
    }

    printf("\nSo luong so nguyen to: %d\n", dem);
    printf("Tong cac so nguyen to: %d\n", tong);

    return 0;
}



#include <stdio.h>
#include <math.h>

int main() {
    int min_n, max_n;
    printf("Nhap gia tri min va max: ");
    scanf("%d %d", &min_n, &max_n);

    for(int n = min_n; n <= max_n; n++) {
        printf("Cac cap chieu dai, chieu rong cho n = %d:\n", n);

        int sqrt_n = (int)sqrt(n); // để giảm số vòng lặp

        for(int w = 1; w <= sqrt_n; w++) {
            if(n % w == 0) {
                int l = n / w;
                printf("%d %d\n", w, l);
            }
        }
    }

    return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x, n;
    int tiep_tuc = 1;

    // Khởi tạo bộ sinh số ngẫu nhiên
    srand((unsigned) time(NULL));

    while (tiep_tuc == 1) {

        // Random số x trong khoảng 1 đến 99
        x = 1 + rand() % 99;  
        printf("Da tao mot so bi mat trong khoang (0 < x < 100).\n");

        do {
            printf("Nhap gia tri du doan (0 < n < 100): ");
            scanf("%d", &n);

            if (n < x)
                printf("Thap hon!\n");
            else if (n > x)
                printf("Cao hon!\n");
            else
                printf("Chinh xac! So bi mat la %d\n", x);

        } while (n != x);

        printf("Ban co muon choi tiep khong? (1: tiep tuc, 0: dung): ");
        scanf("%d", &tiep_tuc);
    }

    printf("Ket thuc chuong trinh.\n");
    return 0;
}

