#include <stdio.h>

int main(void) {
    /* people[building][floor][room] — 2 อาคาร อาคารละ 2 ชั้น ชั้นละ 3 ห้อง */
    int people[2][2][3] = {
        {{2, 1, 3}, {4, 2, 1}},
        {{1, 3, 2}, {2, 4, 3}}
    };

    for (int building = 0; building < 2; building++) {
        printf("อาคาร %d\n", building + 1);
        for (int floor = 0; floor < 2; floor++) {
            printf("  ชั้น %d: ", floor + 1);
            for (int room = 0; room < 3; room++) {
                printf("ห้อง %d = %d คน  ", room + 1, people[building][floor][room]);
            }
            printf("\n");
        }
    }

    return 0;
}
