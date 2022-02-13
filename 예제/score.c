#include <stdio.h>

int main() {
    int score;

    printf("당신의 수학점수를 입력하쇼: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("합격!\n");
    }

    if (score < 90) {
        printf("나가 ㅋㅋ\n");
    }

    return 0;
}