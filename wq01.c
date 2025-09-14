#include <stdio.h>
 
int main() {
    int id;
    char name[50];
    double salary, tax, social, net;
 
    printf("=== โปรแกรมคำนวณเงินเดือนสุทธิ ===\n");
 
    printf("รหัสพนักงาน: ");
    scanf("%d", &id);
 
    printf("ชื่อพนักงาน: ");
    getchar(); // ลบ newline ที่ค้างจาก scanf ก่อนหน้า
    fgets(name, sizeof(name), stdin);
    if(name[strlen(name)-1] == '\n') name[strlen(name)-1] = '\0'; // ลบ \n
 
    printf("เงินเดือน: ");
    scanf("%lf", &salary);
 
    tax = salary * 0.07;
    social = salary * 0.03;
    net = salary - tax - social;
 
    printf("\nรหัสพนักงาน: %d\n", id);
    printf("ชื่อพนักงาน: %s\n", name);
    printf("ภาษี 7%%: %.2f\n", tax);
    printf("ประกันสังคม 3%%: %.2f\n", social);
    printf("เงินเดือนสุทธิ: %.2f\n", net);
 
    return 0;
}