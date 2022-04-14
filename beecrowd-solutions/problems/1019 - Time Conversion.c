#include<stdio.h>
int main() {
    int input_seconds, hours, minutes, seconds;
    scanf("%d", &input_seconds);
    hours = input_seconds / 3600;
    minutes = (input_seconds % 3600) / 60;
    seconds = input_seconds % 60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}