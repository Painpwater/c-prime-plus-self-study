//创建一个在一行打印40个星号的函数
#include <stdio.h>
#define WIDTH 40
#define NAME "Tong Daofei"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"


void starbar(void); //函数原型(有;)
int main()
{
    starbar(); //调用函数(有;)
    printf("%s\n",NAME);
    printf("%s\n",ADDRESS);
    printf("%s\n",PLACE);
    starbar();
    
    return 0;
}
void starbar(void) //定义函数(没有;)
{
    int count;
    for (  count = 1; count <= WIDTH; count++)
    {
        putchar('*');
    }
    putchar('\n');
    
}