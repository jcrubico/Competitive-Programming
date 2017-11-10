#include <stdio.h>
#include <string.h>

int stateMachine(int state, char ch) {
	switch (state) {
		case 0:
			switch (ch) {
				case 'A':
					return 1;
				case 'B':
					return 5;
				case '.':
					return 9;
			}
			break;
		case 1:
			switch (ch) {
				case '.':
					return 2;
			}
			break;
		case 2:
			switch (ch) {
				case '.':
					return 2;
				case 'A':
					return 3;
			}
			break;
		case 3:
			switch (ch) {
				case '.':
					return 4;
			}
			break;
		case 4:
			switch (ch) {
				case '.':
					return 4;
				case 'A':
					return 3;
				case 'B':
					return 5;
					
			}
			break;
		case 5:
			switch (ch) {
				case '.':
					return 6;
			}
			break;
		case 6:
			switch (ch) {
				case '.':
					return 6;
				case 'A':
					return 1;
			}
			break;
		case 7:
			switch (ch) {
				case '.':
					return 8;
			}
			break;
		case 8:
			switch (ch) {
				case '.':
					return 8;
				case 'B':
					return 7;
			}
			break;
		case 9:
			break;
	}
}

void villagesAndTribes(char* input) {
	int i = 0;
	int state = 0;
	int aCounter = 0, bCounter = 0;
	int tempACounter = 0, tempBCounter = 0;
	int aSum = 0, bSum = 0;;
	for (i = 0; i < strlen(input); i++) {
		char ch = input[i];
		state = stateMachine(state, ch);
		if (state == 1 || state == 2) {
			aCounter++;
		}
		if (state == 3) {
			aCounter++;
			aSum += aCounter;
			aCounter = 0;
		}
	}
	printf("%d\n", aSum);
}

int main(int argc, char *argv[]) {
	char input[100000];
	int N = 0, i = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%s", input);
		villagesAndTribes(input);
	}
}

