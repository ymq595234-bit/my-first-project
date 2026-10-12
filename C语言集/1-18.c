/* 1-18 成绩等级（switch 版）
 * 输入：0~100 的整数成绩
 * 输出：A / B / C / D / E
 * 技巧：type = x / 10，用整除把 90~99 归到 9、100 归到 10
 */
#include <stdio.h>

int main(){
    int x, type;

    scanf("%d", &x);

    type = x / 10;               /* 整数除法，取十位上的数 */
    switch (type){
        case 10:
        case 9:                  /* 100 分和 90~99 分都落到这里 */
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:                 /* 其余情况（含 60 分以下）都输出 E */
            printf("E");
            break;
    }

    return 0;
}
