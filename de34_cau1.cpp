// ĐỀ 34
/*
Câu 1: (4 điểm):Viết chương trình sử dụng hàm tính N!!, với N (N<19) nhập từ bànphím. 
N chẵn: N!!=2*4*6*...*N. 
N lẻ: N!!=1*3*5*...*N 
Yêu cầu: Dùng vòng do ...while  
*/
#include <stdio.h>
long tinh_N(int N)
{
    long Tich = 1;
    int i = N;
    do
    {
        Tich *= i;
        i -= 2;
    } while (i > 0);
    return Tich;
}
int main()
{
    int N;
    printf("Nhap n: ");
    scanf("%d", &N);
    if (!(N < 19)) {
        printf("Vui long nhap N < 19, Nhap lai!\n");
        return 1;
    }
    printf("Gia tri cua bieu thuc la: %ld\n", tinh_N(N));
    return 0;
}