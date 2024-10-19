#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    int n, m;
    int s = 0;
    int k = 0;
    printf("Введите число n: ");
    scanf_s("%d", &n);
    printf("Введите число m: ");
    scanf_s("%d", &m);
    for (int i = m; i >= n; i--)
    {
        s += i;
        k++;
    }
    printf("Итоговая сумма:  %d\n", s);
    printf("Выполнено операций: %d\n", k);
    int step;
    float ss = 0;
    for (int i = n; i >= 0; i--)
    {
        step = pow(2, i);
        ss += step;
        if (step <= m)
        {
            printf("2 в степени %d равно %10d\n", i, step);
        }
    }
    printf("%.1fK", ss / 1024);
}