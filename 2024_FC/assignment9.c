#include<stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    float sum = a + b;
    float diff = a - b;
    float prod = a * b;
    float quotient = a / b;  
    
    printf("%f + %f = %.2f\n", a, b, sum);
    printf("%f - %f = %.2f\n", a, b, diff);
    printf("%f * %f = %.2f\n", a, b, prod);
    printf("%f / %f = %.2f\n", a, b, quotient);
    

    return 0; 
}