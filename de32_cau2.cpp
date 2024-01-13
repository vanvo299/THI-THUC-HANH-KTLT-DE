// ĐỀ 32
/*
Câu 2: (6 điểm )Viết chương trình nhập mảng 1 chiều A có N phần tử có sử dụng 
hàm(với N nhập từ bàn phím). : 
a. Xuất các phần tử đã nhập ra màn hình 
b. Xuất ra màn hình giá trị nguyên dương lẻ lớn nhất.
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

void MAX_le(int A[50], int n)
{
    int max = -1e6;
    int check = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0 && A[i] > max && A[i] > 0) {
            max = A[i];
            check = 1;
        }
    }
    if (check == 1) {
        printf("\nPhan  tu co gia tri nguyen duong le lon nhat la: %d\n", max);
    } else printf("\nKhong co phan tu co gia tri le lon nhat\n");
}
int main()
{
    int n;
    printf("Nhap so luong phan tu co trong mang: ");
    scanf("%d", &n);
    int A[n];
    Nhap_mang(A, n);
    Xuat_mang(A, n);
    MAX_le(A, n);

    return 0;
}