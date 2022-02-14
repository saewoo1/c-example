#include <stdio.h>

int main()
{
    char input;

    printf("소문자 알파벳 읽기 \n");
    printf("알파벳을 입력하세요: ");

    scanf("%c", &input);

    switch (input)
    {
    case 'a':
        printf("에이 \n");
        break;

    case 'b':
        printf("비 \n");
        break;

    case 'c':
        printf("씨 \n");
        break;

    default:
        printf("뭔소리야 십덕아 \n");
        break;
    }
    return 0;
}