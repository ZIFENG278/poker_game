#include "poker.h"
#include <stdio.h>
#include <stdio.h>

char *suit_pk[NB_SUIT] = {"\u2660", "\u2665", "\u2666", "\u2663"}; //{"♠", "♥", "♦", "♣"};
char *face_pk[NB_FACE] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

struct poker poker_card[NB_SUIT][NB_FACE];
int card_count[2 * NB_PLAYER + TABLE_CARDS];

void poker_init(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            poker_card[i][j].suit = suit_pk[i];
            poker_card[i][j].face = face_pk[j];
            // printf("%s%s\t", poker_card[i][j].suit, poker_card[i][j].face);
        }
        // puts("\n");
    }
}

int rand_being(int i)
{
    int being;          // suit or face
    being = rand() % i; // four suits or 13 face
    return being;
}

void card_count_init(void)
{
    for (int i = 0; i < 2 * NB_PLAYER + TABLE_CARDS; i++)
    {
        card_count[i] = -1;
        // printf("%d", poker_count[i]);
    }
}

int rand_card(void)
{
    int rand_suit;
    int rand_face;
    int card_of_int;
    rand_suit = rand_being(NB_SUIT);
    rand_face = rand_being(NB_FACE);
    card_of_int = 100 * (rand_suit + 1) + rand_face;
    return card_of_int;
}

void show_player(void)
{
    int distribution = 0;
    int player_suit;
    int player_face;
    for (int palyer = 0; palyer < NB_PLAYER; palyer++)
    {
        printf("PLAYER%d: ", palyer + 1);
        for (int player_poker = 0; player_poker < NB_PLAYER_CARD; player_poker++)
        {
            player_suit = card_count[distribution] / 100 - 1;
            player_face = card_count[distribution] % 100;
            // printf("%d %d", player_suit, player_face);
            // printf("\t\t");

            printf("%s%s\t", poker_card[player_suit][player_face].suit, poker_card[player_suit][player_face].face);
            distribution++;
        }
        printf("\n");
    }
}

void show_table(void)
{
    putchar('\n');
    printf("TABLE: ");
    int player_suit;
    int player_face;
    for (int table = 2 * NB_PLAYER; table < 2 * NB_PLAYER + TABLE_CARDS; table++)
    {
        player_suit = card_count[table] / 100 - 1;
        player_face = card_count[table] % 100;
        printf("%s%s\t", poker_card[player_suit][player_face].suit, poker_card[player_suit][player_face].face);
    }
    putchar('\n');
}
