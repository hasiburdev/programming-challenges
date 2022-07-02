#include <stdio.h>

int main()
{
    double a, b, c, avarage;
    scanf("%lf %lf %lf", &a, &b, &c);

    avarage = (a * 2 + b * 3 + c * 5) / 10;
    printf("MEDIA = %.1lf\n", avarage);

    return 0;
}