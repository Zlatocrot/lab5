#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define M_PI
#include <stdio.h>
#include <math.h>
#include <locale.h>

void task1()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    system("chcp 65001 > nul");
    double gr;
    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);

    double rad = gr * M_PI / 180.0;
    double result = sin(rad);

    printf("Результат: sin(%.0f град) = %.6f\n", gr, result);

}

void task2_2()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    system("chcp 65001 > nul");
    const double k = -4.0;
    double x, a, b, y;

    printf("Введите x: ");
    scanf("%lf", &x);

    a = log(fabs(-k*x));
    b = exp(2.0 * x )+ a*x;
    y = x* pow(a, 3.0) + b*b;

    printf("x = %.1f, y = %.1f\n", x, y);

}


int main() {

    task1();
    task2_2();
    

    return 0;
}