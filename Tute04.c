/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int max(int no1, int num2);
int min(int num1, int num2);
int multi(int num1, int num2);
int main()
{
    int no1, no2, maximum, minimum,multiply;
    printf("Enter any two numbers: ");
    scanf("%d%d", &no1, &no2);
    maximum = max(no1, no2);
    minimum = min(no1, no2);
    multiply=multi(no1,no2);
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);
    printf("multiply = %d\n", multiply);
    return 0;
}
int max(int num1, int num2)
{
    return (no1 > no2 ) ? num1 : num2;
}
int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}
int multi(int num1, int num2)
{
    return (num1*num2);
}