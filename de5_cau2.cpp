/* ĐỀ 05
Câu 2: Viết chương trình có sử dụng hàm để nhập ma trận A cấp m x n (với m, n được nhập từ bàn phím):
a. Xuất ma trận A ra màn hình (2 điểm)
b. Đưa các phần tử lớn nhất của từng hàng của ma trận lên đường chéo chính, và tính tổng các phần tử lớn nhất đó (4 điểm)

*/
#include <stdio.h>
#include <math.h>
// a. Xuất ma trận A ra màn hình (2 điểm)
void Nhap_mang(int mtr[100][100], int m, int n) {
    printf("Nhap mang: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("mtr[%d][%d] = ", i , j);
            scanf("%d", &mtr[i][j]);
        }
    }
}
void Xuat_mang(int mtr[100][100], int m, int n) {
    printf("Mang sau khi nhap la: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", mtr[i][j]);
        }
        printf("\n");
    }
}

//b. Đưa các phần tử lớn nhất của từng hàng của ma trận lên đường chéo chính, và tính tổng các phần tử lớn nhất đó
void hoanvi(int *a, int *b) {
    int temp = *a;
    *a =*b;
    *b = temp;
}
void chuyen(int mtr[100][100], int m, int n) {
    int Tong = 0;
    for (int i = 0; i < m; i++) {
        int max = mtr[i][0];
        int vi_tri = 0;
        for (int j = 1; j < n; j++) {
            if (max < mtr[i][j]) {
                max = mtr[i][j];
                vi_tri = j;
            }
        }
         hoanvi(&mtr[i][i], &mtr[i][vi_tri]);
         Tong += mtr[i][i];

    }
    printf("Ma tran sau khi bien doi la: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", mtr[i][j]);
        }
        printf("\n");
    }
     printf("\nTong cua cac phan tu lon nhat cua moi hang la: %d\n", Tong);

}

int main() {
    int m, n; // m: số hàng, n: số cột
    int mtr[100][100];
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &n);
    Nhap_mang(mtr, m, n);
    Xuat_mang(mtr, m, n);

    chuyen(mtr, m, n);

    return 0;
}