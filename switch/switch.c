#include <stdio.h>

int main()
{
    int input;

    printf("마이펫 \n");
    printf("무엇을 하실 것인지 입력하세요.\n");
    printf("1. 밥주기\n");
    printf("2. 씻기기\n");
    printf("3. 재우기\n");

    scanf("%d", &input);

    if (input == 1)
    {
        printf("마시따 \n");
    }
    else if (input == 2)
    {
        printf("시원하다 \n");
    }
    else if (input == 3)
    {
        printf("드르렁 \n");
    }
    else
    {
        printf(" 뭔소리야.. \n");
    }
    return 0;
}