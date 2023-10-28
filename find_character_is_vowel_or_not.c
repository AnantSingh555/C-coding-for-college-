#include<stdio.h>
int main(){
    char a;
    printf("Enter a character \n");
    scanf("%c",&a);
    if ((a=='a') || (a=='A')||(a=='e')||(a=='E')||(a=='i')||(a=='I')||(a=='o')||(a=='O')||(a=='u')||(a=='U'))
    {
        printf("It is a vowel !!");
    }
    else
    {
        printf("It is not a vowel !!");
    }
    return 0;
}