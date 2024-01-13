// ĐỀ 7
/*
Câu 1: Viết chương trình nhập lãi suất năm r(%), tiền vốn p và thời hạn gửi
tiền n năm. In ra vốn tích lũy a của từng năm. Biết công thức a = p * (1 + r)^n
*/
#include <stdio.h>
#include <math.h>
float Tien_von_tich_luy(float r, float p, int n)
{
    float a; // vốn tích lũy
    a = p * pow(1 + r, n);
    return a;
}
int main()
{
    float lai_suat;
    float tien_von;
    int nam;
    printf("Nhap lai suat nam: ");
    scanf("%f", &lai_suat);
    printf("Nhap tien von ban dau: ");
    scanf("%f", &tien_von);
    printf("Nhap thoi han gui: ");
    scanf("%d", &nam);

    printf("Von tich luy cua tung nam: %4.2f\n", Tien_von_tich_luy(lai_suat, tien_von, nam));
    return 0;
}