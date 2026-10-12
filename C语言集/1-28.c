/* 1-28 九九乘法表（下三角）
 * 输入：行数 n
 * 输出：第 i 行打印 j×i（j 从 1 到 i），共 n 行
 * 技巧：乘积小于 10 时补 3 个空格，否则补 2 个 —— 这样每一列才能对齐
 */
#include <stdio.h>

int main(){
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++){            /* 外循环：控制行 */
        for (j = 1; j <= i; j++){        /* 内循环：控制每行打印几项 */
            printf("%d*%d=%d", j, i, j * i);
            if (i * j < 10){
                printf("   ");           /* 一位数结果，多补一个空格 */
            }
            else {
                printf("  ");
            }
        }
        printf("\n");                    /* 一行打完换行 */
    }

    return 0;
}
