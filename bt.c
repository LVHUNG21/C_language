
#include <stdio.h>

void assign(char *arr1, char *arr2)
{
    for (int i = 0; i < 30; i++)
    {
        arr1[i] = arr2[i];
    }
}

char* calculate(char* fibo_0, char* fibo_1, char* result)
{
    int debt = 0;
    for (int i = 29; i >= 0; i--)
    {
        result[i] = fibo_0[i] + fibo_1[i] + debt;
        debt = 0;
        if (result[i] >= 10 && i != 0)
        {
            debt = 1;
            result[i] = result[i] - 10;
        }
    }
    return result;
}

void fibonacci(int n,char * fibo_0,char *fibo_1,char * result)
{
    printf("\n%d",n);
    if (n == 0)
    {
        result[29] = 0;
    }
    else if (n == 1 || n == 2)
    {
        result[29] = 1;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            calculate(fibo_0, fibo_1, result);
            assign(fibo_0, fibo_1);
            assign(fibo_1, result);
        }
    }
    // return result;
}

int main()
{
    
    char result[32];
    char fibo_0[30];
    char fibo_1[30];
    fibo_1[29] = 1;
    fibo_0[29] = 1; 
    char * arr;
    int number = 0;
    scanf("%d", &number);

    while (number < 1 || number > 100)
    {
        scanf("%d", &number);
    }
    fibonacci(number,fibo_0,fibo_1,result);

    
    // int count = 0;
    // for (int j = 0; j < 30; j++)
    // {
    //     if (arr[j] != 0)
    //     {
    //         count = j;
    //         break;
    //     }
    // }
 
    for (int i = 0; i < 30; i++)
    {
        printf("%d",result[i]);
    }

    return 0;
}