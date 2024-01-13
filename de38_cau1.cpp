// ĐỀ 38
/*
Câu 1:  Viết chương trình sử dụng hàm để tìm ước số chung lớn nhất, bội số chung nhỏ nhất của nhiều số. 
*/
#include <stdio.h>
int GCD(int a, int b)
{
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    } return GCD(b, a % b);
}
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int GCD_n(int mtr[], int n)
{
    int gcd_n = mtr[0];
    for (int i = 0; i < n; i++) {
        gcd_n = GCD(gcd_n, mtr[i]);
    } return gcd_n;
}
int LCM_n(int mtr[], int n) 
{
    int lcm_n = mtr[0];
    for (int i = 0; i < n; i++) {
        lcm_n = LCM(lcm_n, mtr[i]);
    } return lcm_n;
}
int main()
{
    int n;
    printf("Nhap so luong so can tim GCD, LCM: ");
    scanf("%d", &n);
    int mtr[n];
    printf("Nhap cac so can kiem tra: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &mtr[i]);
    }
    printf("Uoc so chung cua cac so trong day la: %d\n", GCD_n(mtr, n));
    printf("Mau so chung cua cac so trong day la: %d\n", LCM_n(mtr, n));
    return 0;
}