#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum_marks;
    float per;
    printf("Enter marks of five subjects : ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    sum_marks = m1 + m2 + m3 + m4 + m5;
    per = ((sum_marks)*100) / 500;
    int percent;
    percent = (int)(per);
    printf("The percentage is %f \n", per);
    switch (percent)
    {
    case 90 ... 100:
        printf("Excellent !!");
        break;
    case 80 ... 89:
        printf("Very Good !!");
        break;
    case 70 ... 79:
        printf("Good !!");
        break;
    case 60 ... 69:
        printf("Average !!");
        break;
    case 50 ... 59:
        printf("Improve more !!");
        break;
    case 0 ... 49:
        printf("Very Poor !!");
        break;

    default:
        printf("Error occured !!");
        break;
    }
    return 0;
}
