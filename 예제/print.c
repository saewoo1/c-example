#include <stdio.h>

int main()
{
    float a = 3.141592f;
    double b = 3.141592;
    int c = 123;

    printf("a : %.2f \n", a); // %.2f -> 소수점 이해 둘째 자리 까지만 표시.
    printf("b : %6.3f \n", b); // %6.3f -> 6자리수 맞추는데, 소수점은 3자리까지만 표기해
    printf("c : %5d \n", c); // %5d 자리수를 되도록 5로 맞춰라!! -> 앞에 두칸 공백, 할당된 수가 5자리 넘으면 걍 넘어서 표기해줌
    return 0;
}