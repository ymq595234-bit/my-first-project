/* 1-9 三角形面积（海伦公式）
 * 输入：三条边长 a b c
 * 输出：能构成三角形则输出面积（保留 2 位小数），否则输出 no
 * 判定：任意两边之和大于第三边
 */
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, p, s;

    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a){        /* 三条边能围成三角形 */
        p = (a + b + c) * 0.5;                       /* 半周长 */
        s = sqrt(p * (p - a) * (p - b) * (p - c));   /* 海伦公式 */
        printf("%.2f", s);
    }
    else {
        printf("no");
    }

    return 0;
}
