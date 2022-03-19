#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "poker.h"

extern struct poker poker_card[NB_SUIT][NB_FACE];
extern int card_count[2 * NB_PLAYER + TABLE_CARDS];

int main(void)
{
    int random_success = 0;
    int card_being_int;
    poker_init();
    card_count_init();
    srand((unsigned int)time(0));
    while (random_success < 2 * NB_PLAYER + TABLE_CARDS)
    {
        card_being_int = rand_card();
        // printf("%d(test1):\t ", card_being_int);
        for (int i = 0; i < 2 * NB_PLAYER + TABLE_CARDS; i++)
        {
            if (card_count[i] == card_being_int)
            {
                card_being_int = rand_card();
                // printf("%d(test2)\t", card_being_int);
                continue;
            }
        }
        card_count[random_success] = card_being_int;
        // printf("%d\n", card_count[random_success]);
        random_success++;
    }
    show_player();
    show_table();

    return 0;
}