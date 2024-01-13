//ĐỀ 58 THỰC HÀNH KĨ THUẬT LẬP TRÌNH
// Câu 1: Viết chương trình có sử dụng hàm để tính 2^n ( n nhập từ bàn phím và n < 2000)
#include <stdio.h>
#include <math.h>
float tinh_mu(int n) {
	float result = pow(2, n);
	return result;
}
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (n >= 2000) {
		printf("Vui long nhap gia tri n < 2000");
		return 1;
	}
	printf("Ket qua cua 2^%d la: %f", n, tinh_mu(n));
	return 0;
}