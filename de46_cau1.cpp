// ĐỀ 46
/*
Câu 1: Cho 3 số. Viết chương trình sử dụng hàm tìm số trung gian, có sử dụng toán tử 3 ngôi
*/
#include <stdio.h>
#include <math.h>
long so_trung_gian(int a, int b, int c)
{
    long max = (a > b && a > c ? a : (b > c ? b : c));
    long min = (a < b && a < c) ? a : (b < c ? b : c);
    return (a + b + c) - min - max;
} 
int main()
{
    long a, b, c; // khởi tạo 3 số cần tìm trung gian
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%ld %ld %ld", &a, &b, &c);
    if (a == b || b == c || a == c) {
        printf("Khong co so trung gian\n");
        return 1;
    }
    printf("So trung gian cua 3 so %ld, %ld, %ld la: %ld\n", a, b, c, so_trung_gian(a, b, c));

    return 0;
}