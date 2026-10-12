/* 1-7 字符转 ASCII 码
 * 输入：一个字符
 * 输出：它对应的整数编码（ASCII 码）
 */
#include <stdio.h>

int main(){
    char ch;               /* 变量名用 ch，比 A 更直观 */

    scanf("%c", &ch);      /* %c 只读一个字符 */
    printf("%d", ch);      /* %d 把它当整数打印，就得到了 ASCII 码 */

    return 0;
}
