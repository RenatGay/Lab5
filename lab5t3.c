#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 30
int list[N];

double deviation(int list[N], int average)
{
    double differense;
    double dif_sum = 0;
    for (int i = 0; i < N; i++)
    {
        differense = (list[i] - average) * (list[i] - average);
        dif_sum += differense;
    }
    dif_sum /= N;
    dif_sum = sqrt(dif_sum);
    return dif_sum;
}

int main(void)
{
    double average;
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        int a = rand() % 201 - 100;
        list[i] = a;
        average += a;
        printf("The list[%d] is %d\n", i, a);
    }

    average /= N;

    printf("Result is: %.2lf\n", deviation(list, average));
    return 0;
}