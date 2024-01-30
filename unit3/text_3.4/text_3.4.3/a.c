#include <windows.h>
#include <stdio.h>

int main(void)
{
    char beep = '\0oo144';

    printf("int size %d\n",sizeof(char));
    printf("aaa%c1\n",beep);
    printf("Gramps sez,\"a \\ is a backslash.\"\n");
    printf("Hello!\007\n");

    return 0;
}