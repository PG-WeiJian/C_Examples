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
    b = a << (16-n);  //����16-n   ���Ƶ�ʱ��Ҫע������ĳ��ȣ����û�г��������ĳ��ȣ��������ƻ��ں����0
    itoa(b, string, 2);
    printf("b--%s\n", string);
    c = a >> n;   //����n
    itoa(c, string, 2);
    printf("c--%s\n", string);
    c = c | b;
    itoa(c, string, 2);
    printf("%s\n", string);
    printf("a:%o\nc:%o", a, c);
    return 0;
}
