/* 1-1 自由落体距离
 * 输入：下落时间 t（秒）
 * 输出：下落距离 s，保留 2 位小数
 * 公式：s = 1/2 * g * t * t，取 g = 9.8
 */
#include <stdio.h>

int main(){
    double t, s, g = 9.8;

    scanf("%lf", &t);          /* 读 double 必须用 %lf */
    s = 0.5 * g * t * t;       /* 0.5 不能写成 1/2：整数相除会被截成 0 */
    printf("%.2f", s);

    return 0;
}
