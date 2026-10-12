/* 1-6 三个整数求和
 * 输入：三个整数 A B C
 * 输出：它们的和
 */
#include <stdio.h>

int main(){
    int A, B, C, s;

    scanf("%d%d%d", &A, &B, &C);
    s = A + B + C;
    printf("%d", s);

    return 0;
}
