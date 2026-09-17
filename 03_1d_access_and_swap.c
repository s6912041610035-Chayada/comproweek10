#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40};
    int temp;

    printf("ก่อนสลับ: %d %d %d %d\n",
           numbers[0], numbers[1], numbers[2], numbers[3]);

    /* สลับค่า numbers[1] และ numbers[3] ด้วยตัวแปรชั่วคราว */
    temp = numbers[1];
    numbers[1] = numbers[3];
    numbers[3] = temp;

    printf("หลังสลับ: %d %d %d %d\n",
           numbers[0], numbers[1], numbers[2], numbers[3]);
    return 0;
}
