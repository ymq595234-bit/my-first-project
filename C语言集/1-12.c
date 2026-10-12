/* 1-12 分段函数求值
 * 输入：整数 x
 * 输出：y
 *   -5 < x < 0 时，y = x - 1
 *   x = 0       时，y = 0
 *   0 < x < 8   时，y = x + 1
 *   其它情况    y = 10
 * 已修正：原代码 x == 0 分支写的是 x = y;（把 y 的值赋给 x），
 *         但此时 y 还没赋过值，程序结果是不确定的；
 *         按分段函数含义应为 y = 0; ，已改正。
 */
#include <stdio.h>

int main(){
    int x, y;

    scanf("%d", &x);

    if (x > -5 && x < 0){
        y = x - 1;
    }
    else if (x == 0){
        y = 0;              /* ← 原为 x = y; 已修正 */
    }
    else if (x > 0 && x < 8){
        y = x + 1;
    }
    else {
        y = 10;
    }

    printf("%d", y);

    return 0;
}
