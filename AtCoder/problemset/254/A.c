
#include<stdio.h>
int main() {
    int input, last_one, last_two;
    scanf("%d", &input);
    last_one = input % 10;
    last_two = (input % 100) / 10;
    printf("%d%d\n",  last_two, last_one);
    return 0;
}