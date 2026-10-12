/* 1-15 五项指标达标判断
 * 输入：days sales volume profit rate 五个数值
 * 输出：达标项 ≥3 个时输出"祝贺你!"，否则"很抱歉!"
 * 达标线：天数≥300、销量≥30、产量≥1、利润≥10、合格率≥80
 */
#include <stdio.h>

int main(){
    double days, sales, volume, profit, rate;
    int cnt = 0;                   /* 计数器：记录达标了几项 */

    scanf("%lf %lf %lf %lf %lf", &days, &sales, &volume, &profit, &rate);

    if (days >= 300) cnt++;
    if (sales >= 30) cnt++;
    if (volume >= 1) cnt++;
    if (profit >= 10) cnt++;
    if (rate >= 80) cnt++;

    if (cnt >= 3){
        printf("祝贺你!");
    }
    else {
        printf("很抱歉!");
    }

    return 0;
}
