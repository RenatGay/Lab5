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

void max_min(int list[N])
{
    int max = list[0], min = list[0];
    for (int i = 0; i < N; i++)
    {
        if (list[i] > max)
        {
            max = list[i];
        }
        if (list[i] < min)
        {
            min = list[i];
        }
    }
    printf("min: %d; max: %d\n", min, max);
}
void more_less(int list[N], double deviation, double average)
{
    for (int i = 0; i < N; i++)
    {
        if ((list[i] < (average - deviation)) || ((list[i] > (average + deviation))))
        {
            printf("Number %d: %d\n", i, list[i]);
        }
    }
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

    more_less(list, deviation(list, average), average);
    return 0;
}