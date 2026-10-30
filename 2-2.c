/* 2-2 向量内积
 * 输入：n，然后 n 个整数（数组 a），再 n 个整数（数组 b）
 * 输出：a 和 b 的内积 sum(a[i] * b[i])
 * 思路：两个数组对应位置相乘，把乘积累加。
 * 关键：sum 必须先清零；三个循环都用 i < n，别用 10。
 */
#include <stdio.h>

int main()
{
    int a[10], b[10];
    int n, i;
    int sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + a[i] * b[i];
    }

    printf("%d", sum);
    return 0;
}
