#include <stdio.h>
#include <string.h>

int main() {
    char name[3][20] = {"Chayada", "onglee", "victor"};
    float score[3][3];
    float average[3] = {0};

    for (int i = 0; i < 3; i++) {
        printf("Enter Math score for %s: ", name[i]);
        scanf("%f", &score[i][0]);

        printf("Enter Phy score for %s: ", name[i]);
        scanf("%f", &score[i][1]);

        printf("Enter Chem score for %s: ", name[i]);
        scanf("%f", &score[i][2]);

        printf("\n");
    }

    printf("====================================================\n");
    printf("%-15s %-10s %-10s %-10s\n",
           "Student (length)", "Math", "Phy", "Chem");
    printf("----------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            average[j] += score[i][j];
        }

        printf("%s (%d)        %.2f       %.2f       %.2f\n",
               name[i],
               (int)strlen(name[i]),
               score[i][0],
               score[i][1],
               score[i][2]);
    }

    printf("----------------------------------------------------\n");

    printf("%-15s %.2f       %.2f       %.2f\n",
           "Subject average",
           average[0] / 3,
           average[1] / 3,
           average[2] / 3);

    printf("====================================================\n");

    return 0;
}