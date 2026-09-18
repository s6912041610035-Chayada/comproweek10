#include <stdio.h>
#include <string.h>

int main(void) {
    char first_name[] = "Feaveya";
    char last_name[] = "Kheawprae";
    char full_name[50];
    char copied_name[20];
    char expected[] = "Freya Theprae";

    /* strlen(str): นับจำนวนอักขระ โดยไม่นับ '\0' */
    printf("strlen(first_name) = %zu\n", strlen(first_name));

    /* strcpy(dest, src): คัดลอก src ไปยัง dest
       dest ต้องมีพื้นที่เพียงพอสำหรับข้อความและ '\0' */
    strcpy(copied_name, first_name);
    printf("หลัง strcpy: %s\n", copied_name);

    /* strcat(dest, src): ต่อ src ไว้ท้าย dest
       จึงต้องกำหนดค่าเริ่มต้นให้ dest เป็น string ก่อน */
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("หลัง strcat: %s\n", full_name);

    /* strcmp(s1, s2): คืนค่า 0 เมื่อข้อความเหมือนกัน */
    if (strcmp(full_name, expected) == 0) {
        printf("strcmp: ข้อความเหมือนกัน\n");
    } else {
        printf("strcmp: ข้อความต่างกัน\n");
    }

    return 0;
}
