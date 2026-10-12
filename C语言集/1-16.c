/* 1-16 助跑摸高判定
 * 输入：身高 H、助跑摸高 xt、目标高度 qt
 * 输出：身高≥180 且 目标一半 < 摸高 ≤ 目标 时输出 perfect，否则 fail
 * 说明：中间的判断条件 xt <= qt && xt * 2 > qt 表示"够到了目标的一半以上"
 */
#include <stdio.h>

int main(){
    int H, xt, qt;

    scanf("%d %d %d", &H, &xt, &qt);

    if (H >= 180){
        if (xt <= qt && xt * 2 > qt){
            printf("perfect");
        }
        else {
            printf("fail");
        }
    }
    else {
        printf("fail");
    }

    return 0;
}
