#include <stdio.h>

int main()
{
    float ave_score;
    float math, english, science, programming;

    printf("수, 영, 과, 코의 점수를 각각 넣어라.! :");
    scanf("%f %f %f %f", &math, &english, &science, &programming);

    ave_score = (math + english + science + programming) / 4;
    printf("당신의 점수는 : %f 입니다. \n", ave_score);

    if (ave_score >= 90)
    {
        printf("올 ㅋ \n");
    }
    else if (ave_score >= 30)
    {
        printf(" 잘좀 해.. \n");
    }
    else
    {
        printf("ㅋㅋ; ㅋ; ㅋ \n");
    }

    return 0;
}