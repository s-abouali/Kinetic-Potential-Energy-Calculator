#include <stdio.h>

#define G 9.81

int main() {
    double mass, velocity, height;
    double kineticEnergy, potentialEnergy, totalEnergy;

    printf("===== ENERGY CALCULATOR =====\n");

    printf("Enter mass (kg): ");
    scanf("%lf", &mass);

    printf("Enter velocity (m/s): ");
    scanf("%lf", &velocity);

    printf("Enter height (m): ");
    scanf("%lf", &height);

    kineticEnergy = 0.5 * mass * velocity * velocity;
    potentialEnergy = mass * G * height;
    totalEnergy = kineticEnergy + potentialEnergy;

    printf("\n----- Results -----\n");
    printf("Kinetic Energy      : %.2lf J\n", kineticEnergy);
    printf("Potential Energy    : %.2lf J\n", potentialEnergy);
    printf("Mechanical Energy   : %.2lf J\n", totalEnergy);

    return 0;
}