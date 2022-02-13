#include <stdio.h>

int main() {
    int num;

    printf("아무 숫자나 ㄲ :");
    scanf("%d", &num);

    if ( num == 7 ) {
        printf("우왕 7이당 ㅋㅋ \n");
    } else if (num ==4 ) {
        printf(" 4는 좀 .. ; \n");
    } else {
        printf("%d? 평범하넹 \n", num);
    }

    return 0;
}