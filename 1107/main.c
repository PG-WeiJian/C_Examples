#include <stdio.h>
#define LETTER 1  //定义宏LETTER代表1

int main()
{
    char str[] = "C Language";
    char c;
    int i = 0;
    while (str[i] != '\0') {
        c = str[i];
#if LETTER
        if (c >= 'a' && c <= 'z') {
            c = c - 32;
        }
#else
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
#endif
        printf("%c", c);
        i++;
    }
    printf("\n");
    return 0;
}
