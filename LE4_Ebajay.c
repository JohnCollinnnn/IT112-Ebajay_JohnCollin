#include <stdio.h>

int main() {
    // Variable declarations
    char name[100];
    char section[50];
    float grade1, grade2, grade3, grade4;
    float average;
    char remarks[20];

    // Input: Complete Name
    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);
    // Remove newline character from fgets
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    // Input: Section
    printf("Enter Section : ");
    fgets(section, sizeof(section), stdin);
    // Remove newline character from fgets
    for (int i = 0; section[i] != '\0'; i++) {
        if (section[i] == '\n') {
            section[i] = '\0';
            break;
        }
    }

    printf("\n");

    // Input: Quarter Grades
    printf("Enter 1st Quarter Grade: ");
    scanf("%f", &grade1);

    printf("Enter 2nd Quarter Grade: ");
    scanf("%f", &grade2);

    printf("Enter 3rd Quarter Grade: ");
    scanf("%f", &grade3);

    printf("Enter 4th Quarter Grade: ");
    scanf("%f", &grade4);

    // Calculate Average
    average = (grade1 + grade2 + grade3 + grade4) / 4;

    // Evaluate Remarks
    if (average >= 90 && average <= 100) {
        sprintf(remarks, "Outstanding");
    } else if (average >= 85 && average <= 89) {
        sprintf(remarks, "Very Satisfactory");
    } else if (average >= 80 && average <= 84) {
        sprintf(remarks, "Satisfactory");
    } else if (average >= 75 && average <= 79) {
        sprintf(remarks, "Fair");
    } else {
        sprintf(remarks, "Failed");
    }

    // Display Results
    printf("\nStudent: %s\n", name);
    printf("Section: %s\n", section);
    printf("General Average: %.2f\n", average);
    printf("Remarks: %s\n", remarks);

    return 0;
}