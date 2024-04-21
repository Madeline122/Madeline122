#include <stdio.h>
#include <math.h> // For M_PI constant

int main() {
    float radius, height, volume, surface_area;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = M_PI * radius * radius * height;
    surface_area = 2 * M_PI * radius * (radius + height);

    // Display results with clear formatting
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);

    return 0;
}