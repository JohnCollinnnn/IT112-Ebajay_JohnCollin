#include <stdio.h>

int main() {
    
    float savings, totalSavings = 0.0, dailyAverage;
    float goal = 500.00;
    int day;

    // Header
    printf("=====================================\n");
    printf("        DAILY SAVINGS TRACKER        \n");
    printf("=====================================\n");

    
    for (day = 1; day <= 7; day++) {
        printf("Enter savings for Day %d: ", day);
        scanf("%f", &savings);
        totalSavings += savings; // Add to running total
    }

   
    dailyAverage = totalSavings / 7;

   
    printf("\n=====================================\n");
    printf("          SAVINGS SUMMARY            \n");
    printf("=====================================\n");
    printf("Total Savings: PHP %.2f\n", totalSavings);
    printf("Daily Average: PHP %.2f\n", dailyAverage);


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