/* 2-1 求数组最大值及其下标
 * 输入：5 个整数
 * 输出：最大值 下标（中间一个空格）
 * 思路：先把第 0 个当擂主，从第 1 个开始挨个比，谁大谁上台，
 *       同时把 index 记成那个人的位置。
 * 关键：max = a[0]; index = 0; 循环从 i = 1 起步。
 *       最大值千万别初始化成 0 —— 数组要是全是负数，0 就成了假冠军。
 */
#include <stdio.h>

int main()
{
    int a[5];
    int i;
    int max, index;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    index = 0;

    for (i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }

    printf("%d %d", max, index);
    return 0;
}
