// ĐỀ 31
/*
Câu 1: (4 điểm) Viết chương trình để tìm ra số nhỏ nhất có 3 chữ số mà khi chia cho 2; 
3;4;5 và 6 có cùng số dư bằng 1 là số nào ? Liệt kê các chữ số đó ?
*/
#include <stdio.h>
void So()
{
    int min = 100;
    int A[100];
    int n = 0;
    printf("So co 3 chu so thoa man yeu cau de bai la: ");
    for (int j = 100; j < 1000; j++) {
        if (j % 2 == 1 && j % 3 == 1 & j % 4 == 1 && j % 5 == 1 && j % 6 == 1) {
            if (j > 100) {
                printf("%d ", j);
                break;
            }         
        }
    }
}
int main()
{
    So();
    return 0;
}