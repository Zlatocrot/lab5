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

void taskdz_15()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    system("chcp 65001 > nul");

    double x = 2.444;
    double y = 0.00869;
    double z = - 130.0;

    double numerator = pow(x, y + 1.0) + exp(y - 1.0);
    double denominator = 1.0 + x * fabs(y - tan(z));
    double fraction = numerator / denominator;

    double diff = fabs(y - x);

    double h = fraction * (1.0 + diff) + pow(diff, 2.0) / 2.0 - pow(diff, 3.0) / 3.0;

    printf("При x = %.3f, y = %.5f, z = %.1f \n", x, y, z);
    printf("h = %.5f \n", h);
}


int main() {

    task1();
    task2_2();
    taskdz_15();

    return 0;
}
