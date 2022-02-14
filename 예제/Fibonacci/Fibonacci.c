#include <stdio.h>

int main()
{
    int a1 = 1;
    int a2 = 2;
    int next = 0;
    int totalsum = 2;

    while (1)
    {
        next = a1 + a2;
        if (next <= 1000000 && next % 2 == 0)
        {
            totalsum += next;
        }
        else if (next > 1000000)
        {
            break;
        }

        a1 = a2;
        a2 = next;
    }
    printf("%d", totalsum);

    return 0;
}