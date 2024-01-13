// ĐỀ 29
/*
Câu 2: (6 điểm ): Viết chương trình nhập mảng 1 chiều A có N phần tử có sử dụng 
hàm(với N nhập từ bàn phím). : 
a. Xuất các phần tử đã nhập ra màn hình. 
b. Xuất ra màn hình số nguyên tố cuối cùng của mảng (nếu có),còn không xuất ra dòng 
“Không có số nguyên tố trong mảng” ?
*/
#include <stdio.h>
#include <math.h>
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
// b. Xuất ra màn hình số nguyên tố cuối cùng của mảng (nếu có),còn không xuất ra dòng “Không có số nguyên tố trong mảng” ?
bool KT_so_nguyen_to(int m) {
    if (m < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(m); i++) {
        if (m % i == 0) {
            return false;
        }
    } return true;
}
void Xuat_so_NT(int A[50], int n)
{
    int temp = -1;
    int check = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (KT_so_nguyen_to(A[i])) {
            temp = A[i];
            check = 1;
            break; // thoát vòng lặp khi 
        } 
    }
    if (check == 0) {
        printf("\nKhong co so nguyen to trong mang\n");
    } else if (check == 1) {
        printf("\nSo nguyen to cuoi cung trong mang la: %d\n", temp);
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
    Xuat_so_NT(A, n);
    return 0;
}