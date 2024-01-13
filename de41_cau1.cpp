/* ĐỀ 41
Câu 1: Viết chương trình có sử dụng hàm để tính C(k,n) (tổ hợp). Xuất ra tam giác Pascal. Xuât ra vị trí giữa màn hình 

*/
#include <stdio.h>
#include <math.h>
int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    } return fact;
}

float tinh_to_hop(float k, float n) 
{
    float to_hop = factorial(n) / (factorial(n - k) * factorial(k));
    return to_hop;
} 
void tam_giac_pascal(int rows) 
{
    for (int i = 0; i <= rows; i++) {
        // In ra khoảng trắng ở đầu dòng
        for (int space = 0; space < ((rows * 4) / 2) - 2 * i; space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("\033[1;33m%4ld", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}
int main() 
{
    float k, n; // 0 <= k <= n
    printf("Nhap k: ");
    scanf("%f", &k);
    printf("Nhap n: ");
    scanf("%f", &n);

    if (!(k >= 0 && n >= k)) {
        printf("Vui long nhap lai !\n");
        return 1;
    }

    printf("Gia tri cua to hop chap %.0f cua %.0f la: %.2f\n", k, n, tinh_to_hop(k, n));
    int rows;
    printf("Nhap so hang cua tam giac pascal: ");
    scanf("%d", &rows);
    printf("Tam giac pascal co %d hang la: \n", rows);
    tam_giac_pascal(rows);
    return 0;
}