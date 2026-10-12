/* 1-13 判断三角形类型
 * 输入：三条边长 a b c（整数）
 * 输出：等边→1，等腰→2，普通三角形→3，不能构成三角形→-1
 */
#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a){   /* 先确认能构成三角形 */
        if (a == b && b == c){
            printf("1");                  /* 三边全等：等边 */
        }
        else if (a == b || a == c || b == c){
            printf("2");                  /* 只有两边相等：等腰 */
        }
        else {
            printf("3");                  /* 普通三角形 */
        }
    }
    else {
        printf("-1");                     /* 构不成三角形 */
    }

    return 0;
}
