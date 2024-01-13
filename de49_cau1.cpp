//ĐỀ 49
// Câu 1: Viết chương trình in ra bảng cửu chương có dạng bảng
#include <stdio.h>
#include <Windows.h>
void setColor(int color) {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main()
{
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 1; i <= 10; i++) {
        setColor(1);
        for (int j = 2; j <= 10; j++) {
            printf("%2d x %2d = %2d\t", j, i, i * j);
            setColor(j);
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    return 0;
}//system("color 0b");