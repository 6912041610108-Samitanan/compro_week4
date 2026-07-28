#include <stdio.h>

int main () {
    // ประกาศตัวแปรสำหรับเก็บข้อมูล
    char name [30];// ชื่อ
    int age;// อายุ
    float height;// ส่วนสูง

    char drink [20];// ตัวอักษรแทนเครื่องดื่ม HC
    float price;// ราคา
    char size;// ขนาดแก้ว T, G, V

    // Ask user to input all valus at once
    scanf("%s %d %f", name, &age, &height);// รับค่าจากบรรทัดที่ 1
    scanf("%s %f %c", drink, &price, &size);// รับค่าจากบรรทัดที่ 2
    

 // แสดงข้อมูลส่วนบุคคล
 printf("%s is %d years old and is %.1f cm tall.\n", name, age, height);

 //แสดงข้อมูลเครื่องดื่ม
 printf("Favorite drink %s costs %.2f baht and has size %c.\n", drink, price, size);

 return 0; // จบการทำงาน
}