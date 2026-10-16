#include <stdio.h>
#include <locale.h>
#include <math.h>

void task1();

int main()
{
    setlocale(LC_ALL, "RUS");

    task1();

    return 0;
}

void task1()
{
    double x1, y1, x2, y2, x3, y3;
    double S;

    printf("Введите координаты точки A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Введите координаты точки B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Введите координаты точки C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    S = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    printf("\nВершины треугольника:\n");
    printf("A(%g, %g)\n", x1, y1);
    printf("B(%g, %g)\n", x2, y2);
    printf("C(%g, %g)\n", x3, y3);
    printf("Площадь треугольника: %f\n", S);
}