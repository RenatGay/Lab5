#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30
int list[N];

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
    printf("Result is: %.2lf\n", average);
    return 0;
}