#include <stdio.h>

int main() {
    float salary, bonus;
    int years_of_service;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter your years of service: ");
    scanf("%d", &years_of_service);

    if (years_of_service > 5) {
        bonus = salary * 0.05;
        printf("Net Bonus Amount: %.2f\n", bonus);
    } else {
        printf("No bonus for you this year.\n");
    }

    return 0;
}