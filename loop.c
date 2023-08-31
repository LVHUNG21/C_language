#include <stdio.h>
int main()
{
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n", i);
    }
    int a, b;
    a = 2;
    b = 6;

    int sum;
    for (int i = a; i < b; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    for (int i = 0; i <= b; i++)
    {
        if (i % 2 == 1)
        {
            sum += 1;
        }
    }
    int aw = 1;
    while (b > 0)
    {
        aw *= a;
        b--;
    }
    while (a <= b)
    {
        if (a % 3 == 0 && a % 5 == 0)
        {
            printf("%d", a);
        }
        a++;
    }
    int i = 1;
    do
    {
        printf("do-while");
    } while (i < 1);

    while (i < 1)
    {
        printf("while");
    }

    return 0;
}