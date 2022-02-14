#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 3;
    printf("a / b 는 : %f \n", a / b); //오류가 나는 이유는 a, b가 모두 정수라 결과값도 정수가 뜨기 때문!!
    return 0;
}