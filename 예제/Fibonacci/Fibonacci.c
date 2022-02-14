#include <stdio.h>

int main() {
    int a1 = 1;
    int a2 = 1;
    int next = 0;
    int totalsum = 0;

    while (a2 < 1000000) {
        
        next = a1 + a2;
        a1 = a2;
        a2 = next;
    }

}