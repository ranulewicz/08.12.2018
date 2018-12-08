#include <stdio.h>


int main() {
#define quad(x) ((x) *(x))
    int i = 1;
    int a = quad(i++);
    printf("%d",a);
    return 0;
}