/* 1-5 身高体重单位换算（厘米/千克 → 英尺英寸/磅）
 * 输入：多组 h w（身高 cm、体重 kg），一直读到没有数据为止
 * 输出：身高 x 英尺 y 英寸，体重 z 磅
 * 换算：1 英寸 = 2.54 cm，1 磅 = 0.45359237 kg
 */
#include <stdio.h>

int main(){
    int h, w, feet;
    double inch, pound;

    while (scanf("%d %d", &h, &w) == 2){   /* scanf 返回成功读入的项数，==2 表示两个都读到了 */
        inch = h / 2.54;
        feet = (int)(inch / 12);           /* 强制取整，得到整英尺数 */
        pound = w / 0.45359237;
        printf("身高%d英尺%.2f英寸,体重%.2f磅", feet, inch - feet * 12, pound);
    }

    return 0;
}
