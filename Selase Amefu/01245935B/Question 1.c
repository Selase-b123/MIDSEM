#include <stdio.h>

int main() {
    float temperature;
    int heartRate, bloodPressure;

    // Input
    printf("Enter body temperature (°C): ");
    scanf("%f", &temperature);

    printf("Enter heart rate (bpm): ");
    scanf("%d", &heartRate);

    printf("Enter blood pressure (mmHg): ");
    scanf("%d", &bloodPressure);

    // Output
    printf("\n--- Patient Readings ---\n");
    printf("Body Temperature: %.1f °C\n", temperature);
    printf("Heart Rate: %d bpm\n", heartRate);
    printf("Blood Pressure: %d mmHg\n", bloodPressure);

    return 0;
}

