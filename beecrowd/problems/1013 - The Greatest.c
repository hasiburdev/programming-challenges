#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b, c, highest;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d eh o maior\n", a>b ? a>c?a:c:b);
    return 0;
}