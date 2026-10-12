/* 1-2 梯形面积
 * 输入：上底 a、下底 b、高 h
 * 输出：面积 S，保留 2 位小数
 * 公式：S = (a + b) * h / 2
 */
#include <stdio.h>

int main(){
    double a, b, h, S;

    scanf("%lf%lf%lf", &a, &b, &h);
    S = (a + b) * h / 2;
    printf("%.2f", S);

    return 0;
}
