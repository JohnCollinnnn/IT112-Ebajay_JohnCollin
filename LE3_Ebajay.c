#include <stdio.h>

int main() {

    char fullName[100];
    char section[50];
    double num1, num2;
    double sum, difference, product, quotient;

printf("Enter your complete name: ");
fgets(fullName, sizeof(fullName), stdin);

printf("Enter your section: ");
fgets(section, sizeof(section), stdin);

printf("Enter first number: ");
scanf("%lf", &num1);

printf("Enter second number: ");
scanf("%lf", &num2);

sum = num1 + num2;
difference = num1 - num2;
product = num1 * num2;
quotient = num1 / num2;

printf("\nStudent Calculator\n");
printf("Student Name: %s", fullName);
printf("Section: %s", section);

printf("\nResults:\n");
printf("%.2lf + %.2lf = %.2lf\n", num1, num2, sum);
printf("%.2lf - %.2lf = %.2lf\n", num1, num2, difference);
printf("%.2lf * %.2lf = %.2lf\n", num1, num2, product);
printf("%.2lf / %.2lf = %.2lf\n", num1, num2, quotient);

    return 0;
}