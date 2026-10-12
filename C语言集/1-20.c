/* 1-20 交错级数求和
 * 输入：项数 k
 * 输出：1 - 1/2 + 1/3 - 1/4 + ... 前 k 项的和
 * 技巧：用 sign 变量每轮翻转正负号
 */
#include <stdio.h>

int main(){
    int k, i, sign = 1;           /* sign 是正负号开关，初始为正 */
    double sum = 0.0;

    scanf("%d", &k);

    for (i = 1; i <= k; i++){
        sum += sign * 1.0 / i;    /* 写成 1.0/i，避免整数除法把结果截成 0 */
        sign = -sign;             /* 每轮把符号翻过来 */
    }

    printf("%f", sum);            /* %f 默认输出 6 位小数 */

    return 0;
}
