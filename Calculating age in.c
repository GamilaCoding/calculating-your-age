#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age, year, year_c;
    /*enter year for output*/
    printf("Enter your birthday: ");
    scanf("%d", &year);
    printf("Enter the current year: ");
    scanf("%d", &year_c);
    age = year_c - year;
    printf("Your age is: %d", age);
}
