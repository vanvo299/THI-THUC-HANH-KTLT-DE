// ĐỀ 47
/*
Câu 2: Viết chương trình sử dụng hàm:
a. Nhâp các số tự nhiên từ bàn phím.
b. Đếm có bao nhiêu số 0 tận cùng của tích n số tự nhiên trên
*/
#include <stdio.h>
#include <math.h>
// a. Nhâp các số tự nhiên từ bàn phím.
void Nhap_day_so(int A[50], int n)
{
    printf("Nhap day so: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}
void Xuat_day_so(int A[50], int n)
{
    printf("Day so sau khi nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}

//b. Đếm có bao nhiêu số 0 tận cùng của tích n số tự nhiên trên

/*
Thuật toán: Phân tich các phần tử trong dãy, xem xét cả số lượng số 2 và số 5 trong các yếu tố của tích,
đếm số lượng số 2 và số 5 trong các yếu tố của tích, và số lượng số 0 tận cùng sẽ bằng số lượng nhỏ hơn của hai số này.
*/ 

void dem_so_0(int A[50], int n)
{
    int check = 0;
    int count_2 = 0, count_5 =0;
    for (int i = 0; i < n; i++) {
        if (A[i] == 0) {
            check = 1;
        }
    }
    if (check == 1) {
        printf("\nCo 1 chu so 0 tan cung cua tich cac so tu nhien trong day\n");
    }

    for (int i = 0; i < n; i++) {
       int num = A[i];
       while(num % 2 == 0) {
        count_2++;
        num /= 2;
       }
       while(num% 5 == 0) {
        count_5++;
        num /= 5;
       }
    }
    if (count_2 < count_5) {
            printf("\nCo %d so chu so 0 tan cung cua tich so tu nhien trong day", count_2);
    } else   printf("\nCo %d so chu so 0 tan cung cua tich so tu nhien trong day", count_5);
}
int main()
{
    int n; // Số lượng số có trong dãy
    printf("Nhap so luong so co trong day: ");
    scanf("%d", &n);
    int A[n];
    Nhap_day_so(A, n);
    Xuat_day_so(A, n);

    dem_so_0(A, n);
    return 0;
}