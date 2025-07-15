#include "money.h"

int calculate_total(const Money *m) {
    int total = 0;

    total += m->notes_2000 * 2000;
    total += m->notes_500  * 500;
    total += m->notes_200  * 200;
    total += m->notes_100  * 100;
    total += m->notes_50   * 50;
    total += m->notes_20   * 20;
    total += m->notes_10   * 10;

    total += m->coins_10 * 10;
    total += m->coins_5  * 5;
    total += m->coins_2  * 2;
    total += m->coins_1  * 1;

    return total;
}

