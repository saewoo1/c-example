#include <stdio.h>

int main() {
    int num;

    printf("아무 숫자나 입력해보세요: ");
    scanf("%d", &num);

    if (num == 7) {
        printf("아싸 7 조아 \n");
    } else {
        printf("으 7 아니네 \n");
    }

    return 0;
}