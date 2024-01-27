#include <stdio.h>
void sm(void);
int main()
{
    sm();
    sm();
    sm();
    printf("\n");
    sm();
    sm();
    printf("\n");
    sm();
    
    return 0;
}

void sm(void)
{
    printf("Smile!");
}