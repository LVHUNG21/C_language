#include <stdio.h>
// function to calculate the greatest common divisor
int gre_com_div(int a, int b)
{
    int gre_com_div_number= 0;
    int i;
    // the loop checks from 1 to the smaller element between the two element
    for (i = 1; i <= (a > b ? b : a); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gre_com_div_number= i;
        }
    }
    return gre_com_div_number;
}
// function to calculate the lower common multiple
int low_com_multi(int a, int b)
{
    int low_com_multi_number= 0;
    int i;
    // the loop check from the greater element between the two element to a*b
    for (i = (a > b ? a : b); i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            low_com_multi_number= i;
        }
    }
    return low_com_multi_number;
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("Please enter two number\n");
    scanf("%d%d", &num1, &num2);
    // check the condition of a,b
    while (num1 < 1 || num1 > 1000 || num2 < 1 || num2 > 1000)
    {
        printf("the first number and the second number are invalid\n");
        scanf("%d%d", &num1, &num2);
    }
    int gcd = gre_com_div(num1, num2);
    int lcm = low_com_multi(num1, num2);
    printf("Greast common divisor is :%d\n", gcd);
    printf("Lower common multiple :%d\n",lcm);
    return 0;
}