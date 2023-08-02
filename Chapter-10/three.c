#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// External variables
int cards[NUM_CARDS][2];
bool straight, flush, four ,three;
int pairs; // Can be 0, 1 or 2

// Prototypes
void read_cards(void);
void analyze_hand(void);
void print_result(void);

// main: Calls read_cards, analyze_hand, and print_result repeatedly.
int main(void) {
	for (;;) {
		read_cards();
		analyze_hand();
		print_result();
	}
}

// read_cards: Reads the cards into the external variables num_in_rank and num_in_suit; checks for bad cards and duplicate cards
void read_cards(void) {
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;

	for (int i = 0; i < NUM_CARDS; i++)	cards[i][0] = 0;

	for (int i = 0; i < NUM_CARDS; i++) cards[i][1] = 0;

	while (cards_read < NUM_CARDS) {
		bad_card = false;
		bool repeated_card = false;

		printf("Enter a card: ");

		rank_ch = getchar();
		switch (rank_ch) {
			case '0':						exit(EXIT_SUCCESS);
			case '2':						rank = 0; break;
			case '3':						rank = 1; break;
			case '4':						rank = 2; break;
			case '5':						rank = 3; break;
			case '6':						rank = 4; break;
			case '7':						rank = 5; break;
			case '8':						rank = 6; break;
			case '9':						rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'j': case 'J': rank = 9; break;
			case 'q': case 'Q': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
			default:						bad_card = true;
		}

		suit_ch = getchar();
		switch (suit_ch) {
			case 'c': case 'C':	suit = 0; break;
			case 'd': case 'D':	suit = 1; break;
			case 'h': case 'H':	suit = 2; break;
			case 's': case 'S':	suit = 3; break;
			default:						bad_card = true;
		}

		while ((ch = getchar()) != '\n') {
			if (ch != ' ') bad_card = true;
		}

		for (int i = cards_read - 1; i >= 0; i--) {
			if (cards[i][0] == rank && cards[i][1] == suit) repeated_card = true;
		}

		if (bad_card) {
			printf("Bad card; ignored.\n");
		} else if (repeated_card) {
			printf("Duplicate card; ignored.\n");
		} else {
			cards[cards_read][0] = rank;
			cards[cards_read][1] = suit;
			cards_read++;
		}
	}
}

// analyze_hand: Determines whether the hand contains a straight, a flush, four-of-a-kind, and/or three-of-a-kind; determines the number of paris; stores the results into the external variables straight, flush, four, three, and pairs.
void analyze_hand(void) {
	int num_consec = 1;
	int rank, suit;

	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	for (int i = 0; i < NUM_CARDS; i++) {
		printf("Card: %d Rank: %d Suit: %d\n", i + 1, cards[i][0], cards[i][1]);
	}

	// Check for flush
	for (int i = 1; i < NUM_CARDS; i++) {
		int last = cards[0][1];

		if (cards[i][1] != last) {
			break;
		}

		flush = true;
	}

	/* Old check for flush
	for (suit = 0; suit < NUM_SUITS; suit++) {
		if (num_in_suit[suit] == NUM_CARDS) flush = true;
	} */

	// Check for straight
	for (int i = 0; i < NUM_CARDS; i++) {
		if (abs(cards[i][0] - cards[i + 1][0]) == 1) {
			num_consec++;
		}
	}
	if (num_consec == NUM_CARDS) {
		straight = true;
		return;
	}

	/* Old check for straight
	rank = 0;
	while (num_in_rank[rank] == 0) rank++;
	for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++) num_consec++;
	if (num_consec == NUM_CARDS) {
		straight = true;
		return;
	} */

	// Check for a 4-of-a-kind, 3-of-a-kind, and pairs
	int count = 1;
	for (int i = 0; i < NUM_CARDS - 1; i++) {
		for (int j = i + 1; j < NUM_CARDS; j++) {
			if (cards[i][1] == cards[j][1]) {
				count++;
				break;
			}
		}
	}
	if (count == 4) four = true;
	if (count == 3) three = true;
	if (count == 2) pairs++;

	/* Old check for a 4-of-a-kind, 3-of-a-kind, and pairs
	for (rank = 0; rank < NUM_RANKS; rank++) {
		if (num_in_rank[rank] == 4) four = true;
		if (num_in_rank[rank] == 3) three = true;
		if (num_in_rank[rank] == 2) pairs++;
	} */
}

// print_result: Prins the classification of the hand, based on the values of the external variables straight, flush, four, three, and pairs
void print_result(void) {
	if (straight && flush)				printf("Straight flush");
	else if (four)								printf("Four of a kind");
	else if (three && pairs == 1)	printf("Full house");
	else if (flush)								printf("Flush");
	else if (straight)						printf("Straight");
	else if (three)								printf("Three of a kind");
	else if (pairs == 2)					printf("Two pairs");
	else if (pairs == 1)					printf("Pair");
	else													printf("High card");

	printf("\n\n");
}