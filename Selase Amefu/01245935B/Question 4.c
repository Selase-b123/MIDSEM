#include <stdio.h>

int main() {
    int reading, total = 0;
    float average;

    int i;
for (i = 1; i <= 4; i++) {
        printf("Enter systolic BP reading %d (mmHg): ", i);
        scanf("%d", &reading);
        total += reading;
    }

    average = total / 4.0;

    printf("\nTotal of readings = %d mmHg\n", total);
    printf("Average of readings = %.2f mmHg\n", average);

    return 0;
}

