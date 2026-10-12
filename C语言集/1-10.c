/* 1-10 三个整数从小到大排序
 * 输入：三个整数 a b c
 * 输出：升序排列后的三个数
 * 思路：两两比较，谁大就把谁换到后面，三趟下来自然排好
 */
#include <stdio.h>

int main(){
    int a, b, c, t;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b){ t = a; a = b; b = t; }   /* 交换 a、b */
    if (a > c){ t = a; a = c; c = t; }   /* 交换 a、c */
    if (b > c){ t = b; b = c; c = t; }   /* 交换 b、c */

    printf("%d %d %d", a, b, c);

    return 0;
}
