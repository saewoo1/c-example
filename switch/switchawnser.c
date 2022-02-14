#include <stdio.h>

int main()
{
    int input;

    printf("마이펫 업그레이드\n");
    printf("무엇을 하실 것인지 입력하세요.\n");
    printf("1. 밥주기\n");
    printf("2. 씻기기\n");
    printf("3. 재우기\n");

    scanf("%d", &input);

    switch (input)
    {
    case 1:
        printf("에? 더줘 \n");
        break;

    case 2:
        printf("시원햐탸 \n");
        break;

    case 3:
        printf("커어억.. 쿨쿨.. \n");
        break;

    default:
        printf("뭔소리야 10새야;\n");
        break;
    }
    return 0;
}