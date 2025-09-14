#include <stdio.h>
 
int main() {
    char name[50];
    double height_cm, weight, bmi;
 
    printf("=== โปรแกรมคำนวณค่า BMI ===\n");
 
    printf("ชื่อ: ");
    scanf(" %[^\n]", name);
 
    printf("ส่วนสูง (เซนติเมตร): ");
    scanf("%lf", &height_cm);
 
    printf("น้ำหนัก (กิโลกรัม): ");
    scanf("%lf", &weight);
 
    bmi = weight / ((height_cm/100) * (height_cm/100));
 
    printf("\nชื่อ: %s\n", name);
    printf("BMI: %.2f\n", bmi);
 
    return 0;
}