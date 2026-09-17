#include <stdio.h>
#include <string.h>

int main(void) {
    char name[20] = "Ada";
    char copy[20];
    char expected[] = "Ada";

    /* String ใน C คือ char array ที่ลงท้ายด้วย '\0' */
    printf("ชื่อ: %s\n", name);
    printf("ความยาว: %zu ตัวอักษร\n", strlen(name));

    strcpy(copy, name); /* ปลายทางต้องมีพื้นที่เพียงพอ */
    printf("สำเนา: %s\n", copy);

    if (strcmp(name, expected) == 0) {
        printf("name และ expected มีข้อความเหมือนกัน\n");
    } else {
        printf("name และ expected มีข้อความต่างกัน\n");
    }

    name[0] = 'a'; /* เข้าถึงอักขระตัวแรกเหมือนอาร์เรย์ทั่วไป */
    printf("หลังแก้ไขอักขระตัวแรก: %s\n", name);

    return 0;
}
