/* 2-5 找鞍点
 * 输入：4 行 4 列共 16 个整数
 * 输出：每个鞍点的 a[i][j]=值（一行一个）；一个都没有则输出 It is not exist!
 * 鞍点定义：它在本行里最大，同时在本列里最小。
 * 判断：对每个元素先置 flag = 1（暂时合格），
 *       扫本行有没有更大的、扫本列有没有更小的，发现一个就置 0。
 * 注意：原 Word 文档这里写成了 printf("...\\n")，两个反斜杠会打印出字面的 \n
 *       而不换行。本文件已改成一个 \n。
 */
#include <stdio.h>

int main()
{
    int a[4][4];
    int i, j, k;
    int flag;
    int found = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {

            flag = 1;

            for (k = 0; k < 4; k++) {
                if (a[i][k] > a[i][j]) {
                    flag = 0;
                }
            }

            for (k = 0; k < 4; k++) {
                if (a[k][j] < a[i][j]) {
                    flag = 0;
                }
            }

            if (flag == 1) {
                printf("a[%d][%d]=%d\n", i, j, a[i][j]);
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("It is not exist!");
    }

    return 0;
}
