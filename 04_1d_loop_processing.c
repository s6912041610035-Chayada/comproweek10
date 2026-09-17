#include <stdio.h>

int main(void) {
    int scores[] = {72, 85, 91, 68, 88};
    int count = sizeof(scores) / sizeof(scores[0]);
    int sum = 0;
    int maximum = scores[0];

    for (int i = 0; i < count; i++) {
        sum += scores[i];
        if (scores[i] > maximum) {
            maximum = scores[i];
        }
        printf("นักศึกษาคนที่ %d ได้ %d คะแนน\n", i + 1, scores[i]);
    }

    printf("ผลรวม = %d\n", sum);
    printf("ค่าเฉลี่ย = %.2f\n", (double)sum / count);
    printf("คะแนนสูงสุด = %d\n", maximum);
    return 0;
}
