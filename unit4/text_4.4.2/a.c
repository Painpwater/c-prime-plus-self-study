//使用转换说明
#include <stdio.h>
#define PI 3.141593

int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n",number,pies);  // x 名参赛者吃了12.750000个浆果馅饼。
    printf("Ehe value of pi is%f.\n",PI);                           // 圆周率的值是3.141593。
    printf("Farewell! thou art too dear for my possessing,\n");     // 永别了！你太珍贵了，我无法拥有，
    printf("%c%d\n",'$',2 * cost);

    return 0;
}