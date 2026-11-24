#include <stdio.h>

struct participant {
    char name[50];
    int age;
    int score;
};

int main() {
    struct participant data[10];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", data[i].name, &data[i].age, &data[i].score);
    }

    int idxMax = 0;
    for (int i = 1; i < n; i++) {
        if (data[i].score > data[idxMax].score) {
            idxMax = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d \n", data[idxMax].name, data[idxMax].score);

    return 0;
}