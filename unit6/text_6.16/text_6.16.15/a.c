#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch[256];
    int count = 0;
    printf("Enter the char in a line:");
    do
    {
        scanf("%c",&ch[count]);
    } while (ch[count]!='\n' && ++count);       // 循环读取用户输入的字符，并保存在字符数组中，直到用户输入回车符
    printf("The reserve char of the ch:");
    for(count--;count>=0;count--)
    {
        printf("%c",ch[count]);
    }
    printf("\nDone\n");
    

    return 0;
}