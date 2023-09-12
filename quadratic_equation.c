#include <stdio.h>
#include <math.h>
void quadratic_equation(double a, double b, double c)
{
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("The equation with no solution");
    }
    else if (delta == 0)
    {
        double solution = (-b / (2 * a));
        printf("The equation has one repeated root:%f", solution);
    }
    else
    {
        double x1 = ((-b + sqrt(delta)) / (2 * a));
        double x2 = ((b + sqrt(delta)) / (2 * a));
        printf("The equation has two distinct roots:%f,%f", x1, x2);
    }
}
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    quadratic_equation(a, b, c);
    return 0;
}