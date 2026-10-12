/* 1-22 输出斐波那契数列前 n 项
 * 输入：项数 n
 * 输出：前 n 项，每项占 8 个字符宽度（%8d，方便对齐）
 * 思路：c = a + b，然后把 a、b 一起往后挪一位
 */
#include <stdio.h>

int main(){
    int n, i;
    int a = 1, b = 1, c = 0;

    scanf("%d", &n);

    if (n >= 1){
        printf("%8d", a);          /* 第 1 项 */
    }
    if (n >= 2){
        printf("%8d", b);          /* 第 2 项 */
    }

    for (i = 3; i <= n; i++){      /* 从第 3 项开始滚动计算 */
        c = a + b;
        a = b;
        b = c;
        printf("%8d", c);
    }

    return 0;
}
