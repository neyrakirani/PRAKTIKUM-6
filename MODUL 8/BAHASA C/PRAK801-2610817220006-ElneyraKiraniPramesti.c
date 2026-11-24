#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int *p = &x;

    printf("Nilai variabel = %d\n", x);
    printf("Alamat variabel = %p\n", (void *)&x);
    printf("Nilai melalui pointer = %d\n", *p);

    *p = *p * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", x);

    return 0;
}