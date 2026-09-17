#include <stdio.h>

int main(void) {
    int scores[5] = {80, 75, 90, 68, 85};
    int count = sizeof(scores) / sizeof(scores[0]);

    printf("สมาชิกตัวแรก: scores[0] = %d\n", scores[0]);
    printf("สมาชิกตัวสุดท้าย: scores[%d] = %d\n", count - 1, scores[count - 1]);
    printf("จำนวนสมาชิก = %d\n", count);

    return 0;
}
