#include <stdio.h>

int main() {
    int height, weight;

    printf("키와 몸무게를 입력하세요: ");
    scanf("%d %d", &height, &weight);

    if( height >= 190 || weight >= 100) {
        printf("당신은 거구입니다\n");
        return 0;
    }

    printf("당신은 거구가 아닙니다.");
    return 0;
}