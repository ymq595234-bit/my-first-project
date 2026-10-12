/* 1-4 分钟换算成小时 + 分钟
 * 输入：一个整数分钟数 m
 * 输出：小时数 剩余分钟数
 * 技巧：/ 取商（小时），% 取余（剩下的分钟）
 */
#include <stdio.h>

int main(){
    int m;

    scanf("%d", &m);
    printf("%d %d", m / 60, m % 60);

    return 0;
}
