#include <stdio.h>
void alter(int* a,int *b);

int main(void)
{
    int x=3,y=2;
    alter(&x,&y);
    printf("x= %d,y= %d.\n",x,y);

    return 0;
}

void alter(int* a, int* b)
{
    int temp;
    temp = *a;
    *a += *b;
    *b = temp - *b;
}