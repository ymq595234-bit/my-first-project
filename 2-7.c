/* 2-7 输入 n 个整数，倒序输出
 * 输入：n，然后 n 个整数
 * 输出：倒序，每个数后面跟一个空格
 * 思路：先读 n 再读数组，然后倒着打印，数组本身不用动。
 * 关键：for (i = n - 1; i >= 0; i--) —— 从最后一格往回走。
 *       别写成 i > 0，那样第 0 个数会被漏掉。
 */
#include <stdio.h>

int main()
{
    int a[10];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
