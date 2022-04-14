#include<stdio.h>

int main() {
    double PI = 3.14159, a, b, c, area_triangle, area_square, area_rectangle, area_circle, area_trapezium;
    scanf("%lf %lf %lf", &a, &b, &c);
    area_triangle = .5 * a * c;
    area_circle = PI * c * c;
    area_trapezium = (a + b)/2 * c;
    area_square = b * b;
    area_rectangle = a * b;

    printf("TRIANGULO: %.3lf\n", area_triangle);
    printf("CIRCULO: %.3lf\n", area_circle);
    printf("TRAPEZIO: %.3lf\n", area_trapezium);
    printf("QUADRADO: %.3lf\n", area_square);
    printf("RETANGULO: %.3lf\n", area_rectangle);

    return 0;
}