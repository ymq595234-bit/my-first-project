/* 1-3 梯形面积（内容与 1-2 完全相同）
 * 说明：本文件与 1-2.c 一模一样，可能是重复粘贴或题目重复，
 *       原样保留方便你核对；确认多余可以删掉这一个。
 * 输入：上底 a、下底 b、高 h
 * 输出：面积 S，保留 2 位小数
 */
#include <stdio.h>

int main(){
    double a, b, h, S;

    scanf("%lf%lf%lf", &a, &b, &h);
    S = (a + b) * h / 2;
    printf("%.2f", S);

    return 0;
}
