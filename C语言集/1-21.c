/* 1-21 求 n 以内所有素数之和
 * 输入：整数 n
 * 输出：2 ~ n 之间所有素数的和
 * 思路：对每个 x，从 2 一直试除到 x-1，只要有一个能除尽就不是素数
 * 优化：原变量名 flage 拼写有误，已改为 flag。
 */
#include <stdio.h>

int main(){
    int n, x, i, sum = 0;

    scanf("%d", &n);

    for (x = 2; x <= n; x++){
        int flag = 1;              /* 1 = 暂时认为它是素数 */
        for (i = 2; i < x; i++){
            if (x % i == 0){
                flag = 0;          /* 找到了因子，不是素数 */
                break;             /* 不用再往下试了 */
            }
        }
        if (flag == 1){
            sum += x;
        }
    }

    printf("%d", sum);

    return 0;
}
