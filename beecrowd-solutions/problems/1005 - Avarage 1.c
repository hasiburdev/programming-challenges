#include <stdio.h>

int main()
{
    double a, b, avarage;
    scanf("%lf %lf", &a, &b);

    avarage = (a * 3.5 + b * 7.5) / 11;
    printf("MEDIA = %.5lf\n", avarage);

    return 0;
}