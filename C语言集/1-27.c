/* 1-27 空瓶换汽水
 * 输入：初始空瓶数 empty
 * 输出：一共能喝到多少瓶
 * 思路：3 个空瓶换 1 瓶，喝完后又会多出 1 个空瓶，直到空瓶不足 3 个为止
 */
#include <stdio.h>

int main(){
    int empty, totle;

    scanf("%d", &empty);

    totle = empty;                       /* 先按"1 个空瓶对应喝过 1 瓶"记总数 */
    while (empty >= 3){
        totle += empty / 3;              /* 本次换来的汽水数 */
        empty = empty / 3 + empty % 3;   /* 换完剩下的空瓶 = 换来的瓶子 + 不够换的余数 */
    }

    printf("%d", totle);

    return 0;
}
