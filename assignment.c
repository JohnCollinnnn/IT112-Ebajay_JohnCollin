#include <stdio.h>

int main() {
    // Variable declarations
    float savings, totalSavings = 0.0, dailyAverage;
    float goal = 500.00;
    int day;

    // Header
    printf("=====================================\n");
    printf("        DAILY SAVINGS TRACKER        \n");
    printf("=====================================\n");

    // For loop: Day 1 through Day 7
    for (day = 1; day <= 7; day++) {
        printf("Enter savings for Day %d: ", day);
        scanf("%f", &savings);
        totalSavings += savings; // Add to running total
    }

    // Calculate daily average
    dailyAverage = totalSavings / 7;

    // Display Savings Summary
    printf("\n=====================================\n");
    printf("          SAVINGS SUMMARY            \n");
    printf("=====================================\n");
    printf("Total Savings: PHP %.2f\n", totalSavings);
    printf("Daily Average: PHP %.2f\n", dailyAverage);

    // If-else: Check if goal is reached
    if (totalSavings >= goal) {
        printf("Status: GOAL REACHED\n");
        printf("Congratulations! You met your weekly savings goal!\n");
    } else {
        float shortfall = goal - totalSavings;
        printf("Status: GOAL NOT REACHED\n");
        printf("You need PHP %.2f more to reach your goal.\n", shortfall);
    }

    printf("=====================================\n");

    return 0;
}