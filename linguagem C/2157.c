#include<string.h>
#include<stdio.h>
#include<stdlib.h>
//Lucas Gabriel, 20192004820
int main () {
    int t, i, j, b, e, h, s, total, cont, total0, total1, total2, totalf;
    char c[2], aux;
    scanf("%i", &t);
    for (i = 0; i < t; i++) {
        cont = 0;
        scanf("%i", &b);
        scanf("%i", &e);
        for (j = b; j <= e; j++) {
            printf("%i", j);
        }
        for (h = e; h >= b; h--) {
            total = j-cont-1;
            cont++;
            if (total >= 10000) {
                totalf = total / 10000;
                total2 = (total % 10000) / 1000;
                total1 = ((total % 10000) % 1000) / 100;
                total0 = (((total % 10000) % 1000) % 100) / 10;
                total = (((total % 10000) % 1000) % 100) % 10;
                 printf("%i%i%i%i%i", total, total0, total1, total2, totalf);
            } else if (total >= 1000) {
                totalf = total / 1000;
                total2 = (total % 1000) / 100;
                total1 = ((total % 1000) % 100) / 10;
                total = ((total % 1000) % 100) % 10;
                 printf("%i%i%i%i", total, total1, total2, totalf);
            } else if (total >= 100) {
                    totalf = total / 100;
                    total2 = (total % 100) / 10;
                    total1 = (total % 100) % 10;
                    printf("%i%i%i", total1, total2, totalf);
            } else if(total >= 10) {
                aux = total%10;
                total1 = aux;
                total = total / 10;
                printf("%i%i", total1, total);
            } else {
                printf("%i", total);
            }
        }
        printf("\n");
    }
    return 0;
}