#include <stdio.h>
#include <math.h>
 
int main() {
    double width, length, height, area, gallons;
 
    printf("=== Room Paint Calculator ===\n");
 
    printf("Room width (meters): ");
    scanf("%lf", &width);
 
    printf("Room length (meters): ");
    scanf("%lf", &length);
 
    printf("Room height (meters): ");
    scanf("%lf", &height);
 
    area = 2 * height * (length + width) + (length * width); // 4 walls + ceiling
    gallons = ceil(area / 2.75);
 
    printf("\nTotal paintable area: %.2f square meters\n", area);
    printf("Number of paint gallons needed: %.0f\n", gallons);
 
    return 0;
}