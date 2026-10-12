/* 1-26 二分法求方程的根
 * 输入：区间端点 a b
 * 输出：方程 2x³ - 4x² + 3x - 6 = 0 在 [a, b] 内的根，保留 4 位小数
 * 思路：先看两端点函数值是否异号（异号说明中间有根），
 *       然后不断取中点、把范围缩小一半，直到区间长度小于 1e-5
 * 优化：1) 同号判断写成 fa * fb > 0，比原来一长串或运算清楚得多；
 *       2) 中点函数值用 fc 存一次，原来同一个式子算了三遍；
 *       3) 三个 if 改成一串 if-else if-else，只会命中一支，逻辑更明确。
 */
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, fa, fb, fc;

    scanf("%lf %lf", &a, &b);

    fa = 2 * a * a * a - 4 * a * a + 3 * a - 6;        /* f(a) */
    fb = 2 * b * b * b - 4 * b * b + 3 * b - 6;        /* f(b) */

    if (fa * fb > 0){                                  /* 同号：区间内没有根 */
        printf("指定区间没有实数根");
        return 0;
    }

    while (fabs(b - a) > 1e-5){                        /* fabs 求浮点绝对值 */
        c = (a + b) / 2;                               /* 取中点 */
        fc = 2 * c * c * c - 4 * c * c + 3 * c - 6;

        if (fc == 0){
            break;                                     /* 恰好命中根 */
        }
        else if (fc > 0){
            b = c;                                     /* 中点偏正，把上界挪过来 */
        }
        else {
            a = c;                                     /* 中点偏负，把下界挪过来 */
        }
    }

    printf("%.4f", c);

    return 0;
}
