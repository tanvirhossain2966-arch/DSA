#include <stdio.h>

int findGCD(int firstNumber, int secondNumber)
{
    if (secondNumber == 0)
        return firstNumber;

    return findGCD(secondNumber,
                   firstNumber % secondNumber);
}

int main()
{
    int firstNumber, secondNumber;

    scanf("%d%d",
          &firstNumber,
          &secondNumber);

    printf("GCD = %d",
           findGCD(firstNumber, secondNumber));

    return 0;
}
