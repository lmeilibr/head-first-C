#include <stdio.h>
#include <stdlib.h>

int main(){
	char train_in[3];
	int winnings = 0;
	int train;
	puts("Pick the train value:");
	scanf("%2s",train_in);
	train = atoi(train_in);

	switch(train){
		case 37:
			winnings = winnings + 50;
			break;
		case 65:
			puts("Jackpot!");
			winnings = winnings + 80;
		case 12:
		winnings = winnings + 20;
		break;
		default:
		winnings = 0;
	}

	printf("Total winnings = %i\n", winnings);
	return 0;
}