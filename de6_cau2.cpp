// Câu 2: viết chương trình sử dụng hàm:
// a. Nhập mảng số nguyên A gồm n phần tử và nhập số nguyên k
// b. xóa phần tử có chỉ số k ra khỏi mảng A. Xuất mảng A sau khi xóa phần tử có chỉ số k ra màn hình
#include <stdio.h>
#include <math.h>
void cau_2(int A[], int n) {
    // a. Nhập mảng số nguyên A gồm n phần tử và nhập số nguyên k

    printf("Nhap so luong phan tu co trong mang: ");
    scanf("%d", &n);
    printf("Nhap mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // b. xóa phần tử có chỉ số k ra khỏi mảng A. Xuất mảng A sau khi xóa phần tử có chỉ số k ra màn hình
    int k;
    printf("Nhap so nguyen k: ");
    scanf("%d", &k);
    if ( k < 0 || k > n) {
        printf("\n Chi so khong hop le\n");
    }
    // xóa phần tử có chỉ số k
    for (int i = k; i < n-1; i++) {
        A[i] = A[i + 1];
    }
    n--;
    printf("Mang A sau khi xoa phan tu co chi co k la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}

int main() {
    int n, A[100], k;
    cau_2(A, n);
    return 0;
}