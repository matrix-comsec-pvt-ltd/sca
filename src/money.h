#ifndef MONEY_H
#define MONEY_H

typedef struct {
    int notes_2000, notes_500, notes_200, notes_100, notes_50, notes_20, notes_10;
    int coins_10, coins_5, coins_2, coins_1;
} Money;

void get_input(Money *m);
int calculate_total(const Money *m);

#endif // MONEY_H

