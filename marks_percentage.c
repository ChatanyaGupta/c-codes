#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    float percentage;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects (out of 100):\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);

    // Calculate total and percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;

    // Display results
    printf("\nTotal Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
