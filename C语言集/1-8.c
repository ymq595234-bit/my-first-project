/* 1-8 抛体水平射程
 * 输入：初速度 v0、发射角度的 度 d、分 f、秒 m
 * 输出：水平射程 x，保留 2 位小数
 * 公式：x = v0^2 * sin(2θ) / g，g = 9.8
 */
#include <stdio.h>
#include <math.h>

int main(){
    double v0, d, f, m;
    double deg, rad, x;

    scanf("%lf%lf%lf%lf", &v0, &d, &f, &m);
    deg = d + f / 60 + m / 3600.0;          /* 度分秒合成十进制度 */
    rad = deg * 3.14159265358979 / 180.0;   /* 角度转弧度：sin 只认弧度 */
    x = v0 * v0 * sin(2 * rad) / 9.8;
    printf("%.2f", x);

    return 0;
}
