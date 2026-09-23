#include <stdio.h>

long long factorial(int number)
{
    if (number == 0 || number == 1)
        return 1;

    return number * factorial(number - 1);
}

int main()
{
    int number;

    scanf("%d", &number);

    printf("Factorial = %lld",
           factorial(number));

    return 0;
}
