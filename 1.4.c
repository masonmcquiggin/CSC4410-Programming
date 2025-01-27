#include <stdio.h>

int main() {
    float userScore, maxScore;

    // Input the user's score and maximum score
    printf("Enter user's score: ");
    scanf("%f", &userScore);
    printf("Enter maximum score: ");
    scanf("%f", &maxScore);

    // Calculate and display the percentage
    if (maxScore > 0) {
        printf("Percentage: %.2f%%\n", (userScore / maxScore) * 100);
    } else {
        printf("Maximum score must be greater than 0.\n");
    }

    return 0;
}
