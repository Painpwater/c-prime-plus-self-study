// 统计字符数、单词数、行数
#include <stdio.h>
#include <ctype.h>              // 为isspace()函数提供原型
#include <stdbool.h>            // 为bool、true、false提供定义
#define STOP '|'

int main(void)
{
    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter text to be analyzed(| to terminate):\n");
    prev ='\n';
    while((c = getchar()) != STOP)
    {
        n_chars++;
        if(c == '\n')
            n_lines++;
        if(!isspace(c) && !inword)
        {
            inword = true;
            n_words++;
        }
        if(isspace(c) && inword)
            inword = false;
        prev = c;
    }
    if(prev != '\n')
        p_lines = 1;
    printf("characters = %ld,words = %d,lines= %d,partial lines = %d",
            n_chars,n_words,n_lines,p_lines);

    return 0;
}