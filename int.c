#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
    printf("double型の最大値:%g\n",DBL_MAX);
    printf("double型の最小値:%g\n",DBL_MIN);
    printf("double型の精度:%d\n",DBL_DIG);
    printf("int型の最大値:%d\n",INT_MAX);
    printf("int型の最小値:%d\n",INT_MIN);
    printf("char型の最大値:%g\n",CHAR_MAX);
    printf("char型の最小値:%g\n",CHAR_MIN);
    printf("char型の符号なし最大値:%g\n",UCHAR_MAX);
    

    return 0;
}