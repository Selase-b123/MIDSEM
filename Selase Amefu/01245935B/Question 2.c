#include <stdio.h>

int main() {
    float temperature;

    printf("Enter body temperature (°C): ");
    scanf("%f", &temperature);

    if (temperature < 35.0) {
        printf("Temperature Category: LOW (%.1f °C)\n", temperature);
    } else if (temperature <= 37.5) {
        printf("Temperature Category: NORMAL (%.1f °C)\n", temperature);
    } else {
        printf("Temperature Category: HIGH (%.1f °C)\n", temperature);
    }

    return 0;
}


