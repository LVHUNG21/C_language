/*******************************************************************************
* Include
******************************************************************************/
#include <stdio.h>
/*array stores the fibo numbers*/
/******************************************************************************
* Variable 
******************************************************************************/
/*
    @brief:
    @parameter [in]:
    @parameter [out]:
    @parameter [inout]:
*/
char g_result[30];
char g_fibo_0[30];
char g_fibo_1[30];
/*find the position where it  starts with a non-zero digit*/
int position_last_leading_zero(){
    int j;
    int pos_last_leading_zero = 0;

    for (j = 0; j < 30; j++)
    {
        if (g_result[j] != 0)
        {
            pos_last_leading_zero = j;
            j = 40;
        }    
    }

    return pos_last_leading_zero;
}
char *assign_two_fibo(char *arr1, char *arr2)
{
    int i;
    /*assign the values of positions in array 2 to array 1*/
    for (i = 0; i < 30; i++)
    {
        arr1[i] = arr2[i];
    }
    return arr1;
}
void cal_sum_two_fibo()
{
    int debt = 0;
    int i=0;
    /*Perform addition of two numbers fom left to right*/
    for (i = 29; i >= 0; i--)
    {
        g_result[i] = g_fibo_0[i] + g_fibo_1[i] + debt;
        debt = 0;
        if (g_result[i] >= 10 && i != 0)
        {
            debt = 1;
            g_result[i] = g_result[i] - 10;
        }
    }
}
void Fibonacci(int n)
{
    if (n == 0)
    {
        g_result[30] = 0;
    }
    else if (n == 1 || n == 2)
    {
        g_result[30] = 1;
    }
    else
    {
        int i=0;
        for (i = 3; i <= n; i++)
        {
            /*this function perform addition of two fibo numbers */
            cal_sum_two_fibo();
            /*this funtion assigns  the values of two Fibo numbers*/
            assign_two_fibo(g_fibo_0, g_fibo_1);
            assign_two_fibo(g_fibo_1, g_result);
        }
    }
}
/*******************************************************************************
* Main
******************************************************************************/
int main()
{
    int number = 0;
    int i;

    g_fibo_1[29] = 1;
    g_fibo_0[29] = 1;
    printf("Please enter the fibonacci number you want to find!!\n");
    scanf("%d", &number);
    /*check the condition of number*/
    while (number < 1 || number > 100)
    {
        printf("Please enter again !!\n");
        scanf("%d", &number);
    }
    /*this funtions calculates the fibo number and stores in array*/
    Fibonacci(number);
    i=position_last_leading_zero();
    /*print the numbers starting  from the position that is not zero*/  
    printf("The %dth Fibonacci number is:",number);
    for (i; i < 30; i++)
    {
        printf("%d", g_result[i]);
    }
    return 0;

}
/*******************************************************************************
* End of file
******************************************************************************/