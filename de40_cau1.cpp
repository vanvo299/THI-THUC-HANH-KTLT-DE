// ĐỀ 40
/*
Câu 1: Viết chương trình nhập số nguyên dương a và kiểm tra a có phải số đối xứng không ?
*/
#include <stdio.h>
#include <string.h>
long KT_doi_xung(char c[])
{
	for (int i = 0; i < strlen(c) / 2; i++) {
		if (c[i] != c[strlen(c) - i - 1])
		return 0;
	} return 1;
}
int main()
{
	char c[100];
	printf("Nhap so: ");
	scanf("%s", &c);
	if (KT_doi_xung(c)) {
		printf("So da cho la so doi xung\n");
	}
	else printf("So da cho khong la so doi xung\n");
	return 0;
}