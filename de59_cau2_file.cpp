/* ĐỀ 59:
câu 2: Viết chương trình có sử dụng hàm:
a. Viết chương trình nhập hai mảng một chiều A và B. Xuất mảng A và B ra màn hình
b. Nối mảng A và B (Không được sắp xếp trước sau, không dùng mảng phụ) đảm bảo thứ tự tăng dần. Xuẩt mảng sau khi nối ra màn hình
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// a. Viết chương trình nhập hai mảng một chiều A và B. Xuất mảng A và B ra màn hình
void Nhap_xuat_mang(int A[], int B[], int size_A, int size_B) {
    //printf("Nhap mang A: ");
  //  for (int i = 0; i < size_A; i++) {
      //  scanf("%d", &A[i]);
    //}
    //printf("Nhap mang B: ");
    //for (int i = 0; i < size_B; i++) {
      //  scanf("%d", &B[i]);
    //}

    printf("Mang A sau khi nhap: ");
    for (int i = 0; i < size_A; i++) {
        printf("%d ", A[i]);
    }
    printf("\nMang B sau khi nhap: ");
    for (int i = 0; i < size_B; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}

// b. Nối mảng A và B (Không được sắp xếp trước sau, không dùng mảng phụ) đảm bảo thứ tự tăng dần. Xuẩt mảng sau khi nối ra màn hình
int compare(const void* a, const void* b)
{
    // Ép kiểu con trỏ sang số nguyên
    int x = *(int*)a;
    int y = *(int*)b;
    if (x < y) return -1; // x nho hon y
    if (x > y) return 1; // x lon hon y
    return 0; // x = y
}
void merge(int A[], int B[], int size_A, int size_B)
{
    int i = 0, j = 0;
    while (i < size_A && j < size_B) {
        if (A[i] <= B[j]) {
            printf("%d ", A[i++]);
        }
        else printf("%d ", B[j++]);
    }
    while (i < size_A) {
        printf("%d ", A[i++]);
    }
    while (j < size_B) {
        printf("%d ", B[j++]);
    }

}
int main()
{
    int size_A, size_B;
    int A[100], B[100];
    // tao file truoc
    FILE* f = fopen("luongvanvo.txt", "r");
    if (f == NULL) {
        printf("Cannot open file !\n");
        return 0;
    }
    //printf("Nhap so luong phan tu trong mang A: "); 
    fscanf(f, "%d", &size_A);
    //printf("Nhap so luong phan tu trong mang B: ");
    fscanf(f, "%d", &size_B);

    for (int i = 0; i < size_A; i++) {
        fscanf(f, "%d", &A[i]);
    }
    for (int i = 0; i < size_B; i++) {
        fscanf(f, "%d", &B[i]);
    }
    // Đóng file
    fclose(f);

    Nhap_xuat_mang(A, B, size_A, size_B);
    printf("Mang sau khi sap xep la: ");
    qsort(A, size_A, sizeof(int), compare);
    qsort(B, size_B, sizeof(int), compare);
    merge(A, B, size_A, size_B);
    return 0;
}