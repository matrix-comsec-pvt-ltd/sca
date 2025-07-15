#include <stdio.h>
#include "money.h"

int main() {
    Money m;
    get_input(&m);

    int total = calculate_total(&m);
    printf("\nTotal amount = ₹%d\n", total);

    return 0;
}
