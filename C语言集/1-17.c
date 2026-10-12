/* 1-17 超速处罚
 * 输入：车速 speed、限速 limit
 * 输出：未超速→Not Speeding；
 *       否则按超速比例 rate = (speed - limit) / limit 分档：
 *       ≤10%→Speeding Warning，≤20%→Fine 100，≤50%→Fine 500，
 *       ≤100%→Fine 1000，>100%→Fine 2000
 * 优化：最后一个分档原写 else if (rate > 1)，其实前面的 else 已经覆盖，
 *       直接用 else 更清楚；return 0 也统一挪到函数末尾。
 */
#include <stdio.h>

int main(){
    int speed, limit;
    double rate;

    scanf("%d %d", &speed, &limit);

    if (speed <= limit){
        printf("Not Speeding");
    }
    else {
        rate = (speed - limit) * 1.0 / limit;   /* 乘 1.0 让除法按小数算 */

        if (rate <= 0.1){
            printf("Speeding Warning");
        }
        else if (rate <= 0.2){
            printf("Fine 100");
        }
        else if (rate <= 0.5){
            printf("Fine 500");
        }
        else if (rate <= 1){
            printf("Fine 1000");
        }
        else {
            printf("Fine 2000");
        }
    }

    return 0;
}
