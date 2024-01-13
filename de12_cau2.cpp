// ĐỀ 12
/*
Câu 2: Viết chương trình có sử dụng hàm:
a. Viết chương trình nhập hai mảng 1 chiều A và B. Xuất mảng A và B ra màn hình
b. Nối mảng A vào B (không dùng mảng phụ). Xuất mảng sau khi nối ra màn hình
*/
#include <stdio.h>
void Nhap_mang(int a[50], int b[50], int n, int m)
{
    printf("Nhap mang A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap mang B: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
}
void Xuat_mang(int a[50], int b[50], int n, int m) 
{
    printf("Mang A sau khi nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nMang B sau khi nhap la: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }
}

// b. Nối mảng A và B (Không dùng mảng phụ)
void tron(int a[50], int b[50], int n, int m)
{
    for (int i = 0; i < n + m; i++) {
        b[i + m] = a[i];
    }
    printf("\nMang sau khi noi la: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", b[i]);
    }
}

int main()
{
    int n, m; // n: kích thước mảng A, m: kích thước mảng B
    printf("Nhap so luong phan tu co trong mang A: "); scanf("%d", &n);
    printf("Nhap so luong phan tu co trong mang B: "); scanf("%d", &m);
    int a[n], b[m];
    Nhap_mang(a, b, n, m);
    Xuat_mang(a, b, n, m);
    tron(a, b, n, m);
    return 0;
}