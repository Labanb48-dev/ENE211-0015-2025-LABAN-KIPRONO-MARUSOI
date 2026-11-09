#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    printf("Enter the first number a: ");
    scanf("%f",&a);
    printf("Enter second number b: ");
    scanf("%f",&b);
    printf("a=%f,b=%f\n",a,b);
    double sum;
    sum=a+b;
    printf("The sum is %f",sum);
    float diff;
    diff=a-b;
    printf("The difference is %f",diff);
    float quotient;
    quotient=a/b;
    printf("The qoutient is %f",quotient);
    float percentage;
    percentage=a/b*100;
    printf("The percentage is %f",percentage);
    return 0;



}
