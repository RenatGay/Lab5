#include <stdio.h>

enum CustomEnum
{
    DEFAULT_1,
    DEFAULT_2,
    DEFAULT_3,
    DUPLICATE_1 = 3,
    DUPLICATE_2 = 3,
    CUSTOM_1 = 5,
    CUSTOM_2 = 8,
    CUSTOM_3 = 10
};
void func()
{
    printf("%d\n", DEFAULT_1);
    printf("%d\n", DEFAULT_2);
    printf("%d\n", DEFAULT_3);
    printf("%d\n", DUPLICATE_1);
    printf("%d\n", DUPLICATE_2);
    printf("%d\n", CUSTOM_1);
    printf("%d\n", CUSTOM_2);
    printf("%d\n", CUSTOM_3);
}

int main(void)
{
    func();
}
