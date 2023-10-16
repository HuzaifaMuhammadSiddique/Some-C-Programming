#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a / b;
}

int main()
{
    int first, second;
    
    printf("Enter first number: ");
    scanf("%d", &first);
    
    printf("Enter second number: ");
    scanf("%d", &second);
    
    int sum = add(first, second);
    int diff = subtract(first, second);
    int product = multiply(first, second);
    int quotient = divide(first, second);
    
    printf("sum: %d \n", sum);
    printf("difference: %d \n", diff);
    printf("product: %d \n", product);
    printf("quotient: %d \n", quotient);
}

