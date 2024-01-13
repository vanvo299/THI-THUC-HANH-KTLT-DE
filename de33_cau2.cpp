// ĐỀ 33
/*
Câu 2: (6 điểm ): Viết chương trình nhập mảng 1 chiều A có N phần tử có sử dụng 
hàm(với N nhập từ bàn phím). : 
a. Xuất các phần tử đã nhập ra màn hình 
b. Đảo thứ tự của mảng,xuất kết quả sau khi đảo ra màn hình. 
*/
#include <stdio.h>
void Nhap_mang(int A[50], int n)
{
    printf("Nhap mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}
void Xuat_mang(int A[50], int n)
{
    printf("Mang sau khi nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}
void hoanvi(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Dao_mang(int A[50], int n)
{
    printf("\nMang sau khi dao la: ");
    for (int i = 0; i < n / 2; i++) {
       hoanvi(&A[i], &A[n - i - 1]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}
int main()
{
    int n;
    printf("Nhap so luong phan tu co trong mang: ");
    scanf("%d", &n);
    int A[n];
    Nhap_mang(A, n);
    Xuat_mang(A, n);
    Dao_mang(A, n);
    return 0;
}