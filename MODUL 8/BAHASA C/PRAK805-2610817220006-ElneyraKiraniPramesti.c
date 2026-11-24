#include <stdio.h>

struct wallet {
    char name[50];
    int balance;
};

void topUp(struct wallet *d, int nominal) {
    d->balance += nominal;
    printf("Top up %d berhasil, saldo = %d\n", nominal, d->balance);
}

void pay(struct wallet *d, int nominal) {
    if (d->balance >= nominal) {
        d->balance -= nominal;
        printf("Bayar %d berhasil, saldo = %d\n", nominal, d->balance);
    } else {
        printf("Bayar %d gagal, saldo tidak cukup\n", nominal);
    }
}

int main() {
    struct wallet d;
    int n;

    scanf("%s %d", d.name, &d.balance);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char type;
        int nominal;
        scanf(" %c %d", &type, &nominal);

        if (type == 'T') {
            topUp(&d, nominal);
        } else if (type == 'B') {
            pay(&d, nominal);
        }
    }

    printf("Saldo akhir %s = %d \n", d.name, d.balance);

    return 0;
}