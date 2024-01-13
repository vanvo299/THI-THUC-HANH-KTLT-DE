// ĐỀ 9
/*
Câu 2: Viết chương trình có sử dụng hàm:
a. Viết chương trình nhập mảng 1 chiều với n phần tử (n >= 9). Xuất mảng A ra màn hình
b. Sắp xếp các phần tử chẵn ra đầu mảng, các phần tử lẻ ra cuối mảng, xuất ra lại màn hình
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

void chan_le(int a[50], int n)
{
    int chan = 0, le = 0;
    int so_chan[50], so_le[50];
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            so_chan[chan++] = a[i];
        } else {
            so_le[le++] = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        a[i] = so_chan[i];
    }
    for (int i = 0; i < n; i++) {
        a[chan + i] = so_le[i];
    }
    printf("\nMang sau khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    printf("Nhap so luong phan tu co trong mang: ");
    scanf("%d", &n);
    int a[n];
    Nhap_mang(a, n);
    Xuat_mang(a, n);
    chan_le(a, n);

    return 0;
}