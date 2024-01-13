/* ĐỀ 05
Câu 1: Viết chương trình sử dụng hàm để tính tổng sau:
 S = 1 + x + x^2/2 + ... + x^(n-1) / (n - 1) + x^n / n
*/
#include <stdio.h>
#include <math.h>
float Tong(int n, float x) {
    float S = 1;
    for (int i = 1; i <= n; i++) {
        S += pow(x, i) / i;
    } return S;
}
int main() {
    int n; 
    float x;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Gia tri cua bieu thuc S = %.2f", Tong(x, n));

    return 0;
}