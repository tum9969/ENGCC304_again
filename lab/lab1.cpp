#include <cstdio> // แก้ไข stduio.h เป็น cstdio สำหรับ printf/scanf ใน C++

int main() {
    char Name[50];
    int Age = 0;

    printf("Enter your name: ");
    scanf("%s", Name); // เพิ่ม & หน้าตัวแปรสำหรับ scanf สำหรับชนิดข้อมูลที่ไม่ใช่ array
    
    printf("Enter your age: ");
    scanf("%d", &Age); // เพิ่ม & หน้าตัวแปร Age สำหรับ scanf
    
    printf("- - - - - -\n");
    printf("Hello %s\n", Name); // ใช้ตัวแปร Name แสดงชื่อ
    printf("Age = %d\n", Age); // ใช้ตัวแปร Age แสดงอายุ
    
    return 0; // เพิ่ม return 0 เพื่อระบุว่าโปรแกรมทำงานเสร็จสมบูรณ์
} //end main function