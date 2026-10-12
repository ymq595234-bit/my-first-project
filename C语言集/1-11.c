/* 1-11 成绩等级（if-else 版）
 * 输入：0~100 的整数成绩
 * 输出：90~100→A，80~89→B，70~79→C，60~69→D，0~59→E，其它→error
 * 优化：原代码声明了 A B C D E error 六个没用的变量，已删掉。
 *       每档的上下界必须都写全，否则超过 100 分会误判成 A。
 */
#include <stdio.h>

int main(){
    int score;

    scanf("%d", &score);

    if (score >= 90 && score <= 100){
        printf("A");
    }
    else if (score >= 80 && score < 90){
        printf("B");
    }
    else if (score >= 70 && score < 80){
        printf("C");
    }
    else if (score >= 60 && score < 70){
        printf("D");
    }
    else if (score >= 0 && score < 60){
        printf("E");
    }
    else {
        printf("error");
    }

    return 0;
}
