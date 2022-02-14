#include <stdio.h>

int main()
{
    int a;
    double b;

    a = 10;
    b = 3;

    printf("a / b 는: %f \n", a / b);
    printf("b / a 는: %f \n", b / a); //오류가 안나는 이유는 둘중 큰 범위로 산술 변환 되기 때문! %d 쓰면 오류남~
    return 0;
}