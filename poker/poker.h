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

int rand_being(int i); // creat random value

void card_count_init(void);

int rand_card(void); // product random poker card in int from

void show_player(void);

void show_table(void);
