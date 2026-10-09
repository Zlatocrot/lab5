#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
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

void task2_4()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    system("chcp 65001 > nul");
    const double t = -6.0;
    double x, a, b, y;

    printf("Введите x: ");
    scanf("%lf", &x);

    a = log(x);
    b = sqrt(x * x + t * t);
    y = pow(fabs(a - b * x), 1.0 / 5.0);

    printf("x = %.1f, y = %.4f\n", x, y);


    int A = (int)a;
    int B = (int)b;
    int C = (int)y;


    int cond_a = ((A % 2 == 0) + (B % 2 == 0) == 1);


    int cond_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("условие выполнено (1 - да, 0 - нет):\n");
    printf("а) только одно из A и B чётное: %d\n", cond_a);
    printf("б) A, B, C кратны 3: %d\n", cond_b);
}


void taskdz()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    system("chcp 65001 > nul");

    double x = 4000.0;
    double y = -0.875;
    double z = -0.000475;

    double base = fabs(cos(x) - cos(y));
    double exponent = 1.0 + 2.0 * sin(y) * sin(y);
    double series = 1.0 + z + (z * z) / 2.0 + (z * z * z) / 3.0 + (z * z * z * z) / 4.0;

    double w = pow(base, exponent) * series;

    printf("При x = %.0f, y = %.3f, z = %.6f\n", x, y, z);
    printf("w = %.4f\n", w);
}


int main() {

    task1();
    task2_4();
    taskdz();

    return 0;
}