/* 1-24 韩信点兵（中国剩余定理）
 * 输入：三个余数 x y z
 * 输出：最小的正整数 N，满足 N%3==x、N%5==y、N%7==z
 * 思路：从 1 开始一个一个试，第一个满足三个条件的就输出
 */
#include <stdio.h>

int main(){
    int x, y, z, N;

    scanf("%d %d %d", &x, &y, &z);

    for (N = 1; ; N++){                  /* 没有终止条件，靠内部 break 跳出 */
        if (N % 3 == x && N % 5 == y && N % 7 == z){
            printf("%d", N);
            break;                       /* 找到就跳出，否则会一直循环下去 */
        }
    }

    return 0;
}
