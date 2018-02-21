#include "guess.h"

int set_answer() {
    srand(time(NULL));

    return rand() % 10;
}

int answer(int a, int g) {
    if (g > 9 || g < 0) {
        return 3;
    }

    if (a == g) {
        return 0;
    }
    else {
        if (a > g) {
            return 1;
        }
        else {
            return 2;
        }
    }
}
