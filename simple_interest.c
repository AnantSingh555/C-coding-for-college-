#include<stdio.h>
int main(){
    int Principal_amount,Years,Rate,Interest;
    printf("Enter the principal amount ");
    scanf("%d",&Principal_amount);
    printf("Enter the number of years ");
    scanf("%d",&Years);
    printf("Enter the rate of interest ");
    scanf("%d",&Rate);
    Interest=Principal_amount*Years*Rate/100;
    printf("The simple interest is %d",Interest);
    return 0;
}