// ĐỀ 7
/*
Câu 2: 
a. Viết chương trình nhập mảng 1 chiều A với n phần tử (n > = 9). Xuất mảng A ra màn hình
b. Nhập số k từ bàn phím, kiểm tra k có trong mảng không ?
*/
#include <stdio.h>
void Nhap_mang(int a[50], int n)
{
    printf("Nhap mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
void Xuat_mang(int a[50], int n)
{
    printf("Mang sau khi nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int Kiem_tra(int a[50], int n, int *k) 
{
    int check = 0;
    printf("\nNhap phan tu can kiem tra: ");
    scanf("%d", k);
    for (int i = 0; i < n; i++) {
        if (a[i] == *k) {
            check = 1; 
        }
    }
    return check;
}
int main()
{
    int n;
    int k;
    printf("Nhap so luong phan tu co trong mang: ");
    scanf("%d", &n);
    int a[n];
    Nhap_mang(a, n);
    Xuat_mang(a, n);
    if (Kiem_tra(a, n, &k) == 1) {
        printf("Phan tu %d co trong mang\n", k);
    } else printf("Phan tu %d khong co trong mang\n", k);
    return 0;
}