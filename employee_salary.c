#include<stdio.h>
int main(){
    float BS,DA,HRA,gross_salary,PF,net_salary;
    printf("Enter basic salary of employee ");
    scanf("%f",&BS);
    DA=(25*BS)/100;
    HRA=(15*BS)/100;
    gross_salary=BS+DA+HRA;
    PF=(10*gross_salary)/100;
    net_salary=gross_salary-PF;
    printf("The net salary of the employee is %f",net_salary);
    return 0;
}