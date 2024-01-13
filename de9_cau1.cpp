#include <stdio.h>

void thoigian(int n, int* h, int* m, int* s) {
    *h = (*h + (n + *s) / 3600) % 24;
    *m = (*m + (n + *s) / 60) % 60;
    *s = (n + *s) % 60;
}

int main() {
    int h, m, s, n;

    // Nhập thời gian hiện tại
    printf("Nhap gio: ");
    scanf("%d", &h);
    printf("Nhap phut: ");
    scanf("%d", &m);
    printf("Nhap giay: ");
    scanf("%d", &s);

    // Nhập số giây cần tăng
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    // Kiểm tra tính hợp lệ của n
    if (n < 0) {
        printf("Nhap lai!!!\n");
        return 1;
    }

    // Gọi hàm để tính thời gian sau n giây
    thoigian(n, &h, &m, &s);

    // In ra màn hình kết quả
    printf("Ket qua sau %d giay: %02d:%02d:%02d\n", n, h, m, s);

    return 0;
}
