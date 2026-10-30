/* 2-3 成绩均值、方差、标准差
 * 输入：n，然后 n 个成绩（整数）
 * 输出：Avg=均值 Std=标准差（各保留 2 位小数）
 * 思路：第一趟读完并累加求均值；第二趟累加 (a[i] - avg) 的平方；
 *       平方和除以 n 得方差，开方得标准差。
 * 注意：sum 声明成 double，avg = sum / n 才是小数除法；
 *       若 sum 写成 int，avg 就会被砍成整数，后面全错。
 *       另外方差这里除以 n（总体方差），不是 n-1。
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int a[10];
    int n, i;
    double sum = 0, avg;
    double variance = 0, std;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / n;

    for (i = 0; i < n; i++) {
        variance = variance + (a[i] - avg) * (a[i] - avg);
    }

    variance = variance / n;
    std = sqrt(variance);

    printf("Avg=%.2f Std=%.2f", avg, std);
    return 0;
}
