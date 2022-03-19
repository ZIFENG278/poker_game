#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TABLE_CARDS 4
#define NB_PLAYER 5
#define NB_SUIT 4
#define NB_FACE 13
#define NB_PLAYER_CARD 2

struct poker
{
    char *suit;
    char *face;
};

void poker_init(void);

int rand_being(int i);

void card_count_init(void);

int rand_card(void);

void show_player(void);

void show_table(void);
