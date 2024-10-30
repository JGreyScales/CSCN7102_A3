// CSC71020 - 2024-10-30 - JACKSON GLOVER - ASSIGNMENT 3

#include <string.h>

#define MAX_CHOICE_SIZE 9

char* rps(char player1Choice[MAX_CHOICE_SIZE], char* player2Choice[MAX_CHOICE_SIZE]) {

	// **
	// Converts the String inputs to integer values
	// Stores them into values array
	char strings[2][10] = { 0 };
	int values[2] = { 0 };

	strcpy_s(strings[0], MAX_CHOICE_SIZE, player1Choice);
	strcpy_s(strings[1], MAX_CHOICE_SIZE, player2Choice);

	for (int i = 0; i < 2; i++) {
		if (0 == strcmp("Rock", strings[i])) {
			values[i] = 1;
		}
		else if (0 == strcmp("Scissors", strings[i])) {
			values[i] = 2;
		}
		else if (0 == strcmp("Paper", strings[i])) {
			values[i] = 3;
		}
	}
	// **

	// handles draws
	if (values[0] == values[1] && 0 != values[0]) {
		return "Draw";
	}
	// handles player 1 victory
	else if (values[0] == values[1] - 1 || (3 == values[0] && 1 == values[1])) {
		return "Player1";
	}
	// handles player 2 victory
	else if (values[1] == values[0] - 1 || (3 == values[1] && 1 == values[0])) {
		return "Player2";
	}

	return "Invalid";
}


int main(void) {
	return 0;
}