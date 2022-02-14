#include <stdio.h>

int main()
{
    int line;
    printf("삼각형의 높이를 써주세용: ");
    scanf("%d", &line);

    for (int i = 1; i <= line; i++)
    {
        for (int j = 0; j < line - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}