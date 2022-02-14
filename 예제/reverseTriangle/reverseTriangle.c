#include <stdio.h>

int main()
{
    int i = 1;
    int line, space, star;
    space = 1;
    star = 1;

    printf("삼각형의 높이는? : ");
    scanf("%d", &line);

    while (i <= line)
    {
        while (space < i)
        {
            printf(" ");
            space++;
        }
        while (star <= line * 2 - 1)
        {
            printf("*");
            star++;
        }
        printf("\n");
        i++;
    }

    return 0;
}