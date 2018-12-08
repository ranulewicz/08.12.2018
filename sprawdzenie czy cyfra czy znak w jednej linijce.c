#include <stdio.h>
#define isDigit(c) ((c) >= '0' && (c) <= '9')

int main() {
    char znak = 'a';

    isDigit(znak) ? printf("jestem cyfra") : printf("nie jestem cyfra");

    return 0;
}