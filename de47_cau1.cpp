// ĐỀ 47
/*
Câu 1: CHo các chữ số 0, 2, 3, 5. Hỏi tất cả có bao nhiêu chữ số tự nhiên có 4 chữ số khác nhau mà mỗi số có đủ 4 chữ số đã cho ?
Viết chương trình liệt kê và đếm các số trên
*/
#include <stdio.h>
void dem_so(long num[4])
{
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) continue;
            else for (int k = 0; k < 4; k++) {
                if (i == k || j == k) continue;
                else for (int l =0; l < 4; l++) {
                    if (i == l || j == l || k == l) continue;
                    else {
                        if (num[i] == 0) continue;
                        else {
                            printf("\n%d%d%d%d", num[i], num[j], num[k], num[l]);
                            count++;
                        }
                    }
                }
            }
        }
    }
    printf("\nCo %d so co 4 chu so khac nhau ", count);
}
int main()
{
    long num[] = {0, 2, 3, 5};
    dem_so(num);

    return 0;
}