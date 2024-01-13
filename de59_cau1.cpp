// ĐỀ 59:
// Câu 1: viết chương trình có sử dụng hàm để tính 2^n (n được nhập từ bàn phím và n <= 2000)
#include <stdio.h>
#include <math.h>
double tinh(int n) 
{
    double P;
    P = pow(2, n);
    return P;
}
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n > 2000) {
        printf("Nhap lai\n");
        return 1;
    }
    printf("Ket qua cua 2^%d la: %.0lf", n, tinh(n));
    return 0;
}