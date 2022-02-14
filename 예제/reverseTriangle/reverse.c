#include <stdio.h>

int main()
{
    int i, line, space, star;
    i = 0;
    star = 0;
    space = 0;

    printf("삼각형의 높이를 입력하세요: ");
    scanf("%d", &line);

    while (i < line)
    {
        while (space < i)
        {
            printf(" ");
            i++;
        }
        while (star < 2 * (line - i) - 1)
        {
            printf("*");
            star++;
        }
        printf("\n");
        i++;
    }
}