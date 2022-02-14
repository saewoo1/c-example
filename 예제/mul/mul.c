#include <stdio.h>

int main()
{
    int num;
    int i = 1;
    int sum = 1;

    printf("몇까지 곱할까요?");
    scanf("%d", &num);

    while (i <= num)
    {
        sum *= i;
        i++;
    }
    printf("%d", sum);
}