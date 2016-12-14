#include <stdio.h>
#define PI 3.1415926
#define CIRCLE(R, L, S, V) L = 2 * PI * R; S = PI * R * R; V = 4.0 / 3.0 * PI * R * R * R

int main()
{
    double r, l, s, v;
    printf("please enter r:");
    scanf("%lf", &r);
    CIRCLE(r, l, s, v);
//  l = 2 * PI * r; s = PI * r * r; v = 4.0 / 3.0 * PI * r * r * r;  实则上调用宏之后，代码在预处理的时候替换成这句
    printf("r=%6.2lf\nl=%6.2lf\ns=%6.2lf\nv=%6.2lf\n", r, l, s, v);
    return 0;
}
