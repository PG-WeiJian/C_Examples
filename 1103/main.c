#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926
#define S(r) PI * r * r


int main()
{
    double r = 3.6;
    double area = S(r);
    printf("r=%f\narea=%f\n", r, area);
    return 0;
}
