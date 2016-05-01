#include <stdio.h>
#include <stdlib.h>

void floatTolnt(float f) {
    int i = 0;

    if (f > 0)
        i = (f * 10 + 5) / 10;
    else
        if (f < 0)
            i = (f * 10 - 5) / 10;
        else
            i = 0;

    printf("\n四舍五入后结果为：%d\n", i);
}

int main()
{
    float f;

    printf("\nPlease input a float number:");
    scanf("%f",&f);

    floatTolnt(f);

    return 0;
}
