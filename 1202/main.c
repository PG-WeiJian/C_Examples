#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned short int a, b, c;
    int n;
    char string[100];
    printf("please enter a & n:");
    scanf("a=%o,n=%d", &a, &n);
    itoa(a, string, 2);
    printf("a--%s\n", string);
    b = a << (16-n);  //左移16-n   左移的时候要注意变量的长度，如果没有超出变量的长度，程序左移会在后面加0
    itoa(b, string, 2);
    printf("b--%s\n", string);
    c = a >> n;   //右移n
    itoa(c, string, 2);
    printf("c--%s\n", string);
    c = c | b;
    itoa(c, string, 2);
    printf("%s\n", string);
    printf("a:%o\nc:%o", a, c);
    return 0;
}
