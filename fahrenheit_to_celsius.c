#include<stdio.h>
int main(){
    float Fa,C;
    printf("Enter the temperature in fahrenheit :");
    scanf("%f",&Fa);
    C=((Fa-32)*5.0)/9.0;
    printf("The temperature in celsius is %f",C);
    return 0;
}