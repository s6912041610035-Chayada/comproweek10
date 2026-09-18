#include <stdio.h>

int main(void) {
    int days_in_month[4] = {31, 28, 31, 30};
    int lucky_numbers[5] = {7, 14}; /* สมาชิกที่เหลือมีค่า 0 */
    int zeros[5] = {0};             /* ทุกสมาชิกมีค่า 0 */
    int months[] = {31, 28, 31, 30};/* ไม่กำหนดขนาด */

    for (int i = 0; i < 5; i++) {
        printf("lucky_numbers[%d] = %d, zeros[%d] = %d\n",
               i, lucky_numbers[i], i, zeros[i]);
    }

    printf("เดือนแรกมี %d วัน\n", days_in_month[0]);
    printf("เดือนที่สี่มี %d วัน\n", months[3]);
    return 0;
}
