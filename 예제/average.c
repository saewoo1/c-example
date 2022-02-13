#include <stdio.h>

int main() {
    int a;
    printf("수를 입력하세요: ");
    scanf("%d", &a);

    if (a >= 10) {
        if (a < 20) {
            printf("%d는 10 이상 20 미만", a);
            return 0;
        }
    }

    printf("%d는 저기에 속하지 못했군..", a);
    
    return 0;
}