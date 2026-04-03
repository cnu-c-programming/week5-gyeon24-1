#include <stdio.h>

int main(){
    int x = 10;
    int y = 20;

    printf("%d\n", x);

    int *const p = &x;

    *p = y;

    printf("%d\n", x);

    return 0;
}
