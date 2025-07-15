#include <stdio.h>
#include "money.h"

void get_input(Money *m) {
    printf("Enter the number of currency notes and coins:\n");

    printf("2000 notes: "); scanf("%d", &m->notes_2000);
    printf("500 notes: ");  scanf("%d", &m->notes_500);
    printf("200 notes: ");  scanf("%d", &m->notes_200);
    printf("100 notes: ");  scanf("%d", &m->notes_100);
    printf("50 notes: ");   scanf("%d", &m->notes_50);
    printf("20 notes: ");   scanf("%d", &m->notes_20);
    printf("10 notes: ");   scanf("%d", &m->notes_10);

    printf("10 coins: ");   scanf("%d", &m->coins_10);
    printf("5 coins: ");    scanf("%d", &m->coins_5);
    printf("2 coins: ");    scanf("%d", &m->coins_2);
    printf("1 coins: ");    scanf("%d", &m->coins_1);
}

