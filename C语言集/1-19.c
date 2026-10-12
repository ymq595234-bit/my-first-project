/* 1-19 统计正数、零、负数的个数
 * 输入：先读一个整数 n（数据个数），再读 n 个整数
 * 输出：正数个数 零的个数 负数个数
 */
#include <stdio.h>

int main(){
    int n, x, i;
    int zheng = 0, ling = 0, fu = 0;    /* 三个计数器 */

    scanf("%d", &n);

    for (i = 0; i < n; i++){            /* 循环 n 次，每次读一个数 */
        scanf("%d", &x);
        if (x > 0){
            zheng++;
        }
        else if (x == 0){
            ling++;
        }
        else {
            fu++;
        }
    }

    printf("%d %d %d", zheng, ling, fu);

    return 0;
}
