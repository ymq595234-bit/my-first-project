/* 2-4 二维数组周边元素累加和
 * 输入：m n，然后 m 行 n 列个整数
 * 输出：周边元素之和
 * 思路：周边 = 第一行 + 最后一行 + 第一列 + 最后一列。
 * 关键：if (i == 0 || i == m-1 || j == 0 || j == n-1) 用的是"或"，
 *       四条边只要沾上一条就算。用"且"就只剩四个角了。
 */
#include <stdio.h>

int main()
{
    int a[10][10];
    int m, n;
    int i, j;
    int sum = 0;

    scanf("%d%d", &m, &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                sum = sum + a[i][j];
            }
        }
    }

    printf("%d", sum);
    return 0;
}
