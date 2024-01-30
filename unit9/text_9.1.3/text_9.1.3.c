//创建带参数的函数
#include <stdio.h>
#include <string.h> //为strlen()提供原型
#define WIDTH 40
#define NAME "Tong Daofei"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define SPACE ' '

void show_n_char(char ch,int num); //函数原型(显示一个字符n次)
int main()
{
    int spaces;
    show_n_char('*',WIDTH); //调用函数(创建星号，用符号常量作为参数)
    printf("\n");
    show_n_char(SPACE,12); //用符号常量作为参数
    printf("%s\n",NAME);
    spaces = (WIDTH-strlen(ADDRESS))/2; //计算要跳过多少空格
    show_n_char(SPACE,spaces); //用一个变量作为参数
    printf("%s\n",ADDRESS);
    show_n_char(SPACE,(WIDTH-strlen(PLACE))/2); //用一个表达式作为参数
    printf("%s\n",PLACE);
    show_n_char('*',WIDTH);

    return 0;
}
void show_n_char(char ch,int num)//定义函数(显示一个字符n次)
{
    int count;
    for ( count = 1; count <= num; count++)
    {
        putchar(ch);
    }
    
}