#include <stdio.h>

struct participant {
    char name[50];
    int age;
    int score;
};

int main() {
    struct participant p;

    printf("Nama : ");
    scanf(" %[^\n]", p.name);
    printf("Umur : ");
    scanf("%d", &p.age);
    printf("Skor : ");
    scanf("%d", &p.score);

    printf("Data Peserta:\n");
    printf("Nama : %s\n", p.name);
    printf("Umur : %d tahun\n", p.age);
    printf("Skor : %d\n", p.score);

    return 0;
}