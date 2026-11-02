#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double x;

    const double y = -1.625e3;
    const double z = 0.512;

    printf("Введите значение x (например, 0.03981): ");
    scanf("%lf", &x);

    double part1 = pow(fabs(y), 1.0 / 4.0);

    double part2 = x + 4.0 * part1;

    double part3 = sqrt(part2);

    double exponent = x - (1.0 / sin(z));
    double part4 = exp(exponent);

    double part5 = pow(part4, 1.0 / 3.0);

    double a = pow(2.0, -x) * part3 * part5;

    printf("\nРезультат: a = %.6f\n", a);

    if (fabs(x - 3.981e-2) < 1e-6)
    {
        printf("\n--- Контрольный пример ---\n");
        printf("При x = 3.981e-2 ожидаемое значение a ? 1.26185\n");
        printf("Вычисленное значение: a = %.5f\n", a);
    }

    system("pause");
    return 0;
}