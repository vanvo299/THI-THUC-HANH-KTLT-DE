// ĐỀ 35
/*
Câu 1: :Viết chương trình sử dụng hàm tính N!!, với N (N < 19) nhập từ bàphím. 
N chẵn: N!!=2*4*6*...*N. 
N lẻ: N!!=1*3*5*...*N 
Yêu cầu: Dùng đệ quy
*/
#include <stdio.h>
int tinh_N(int N)
{
    if (N <= 0) {
        return 1;
    } return N * tinh_N(N - 2);
}
int main()
{
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);
    if (N >= 19) {
        printf("vui long nhap N < 19, vui long nhap lai!");
        return 1;
    }
    printf("Gia tri cua bieu thuc la: %d\n", tinh_N(N));
    return 0;
}