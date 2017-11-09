#include <stdio.h>
#include <string.h>

void villagesAndTribes(char* input) {
	int i = 0, j = 0;
	int length = strlen(input);
	int dotCounter = 0;
	int aCounter = 0;
	int aSum = 0;
	int saveIndex = 0;
	int firstState = 1;
	for (i = saveIndex; i < length; i++) {
		if (input[i] == 'A') {
			if (firstState) {
				aCounter++;
			}
			for (j = i + 1; j < length; j++) {
				if (input[j] == 'A') {
					aCounter++;
					saveIndex = j;
					firstState = 0;
					break;
				}
				if (input[j] == '.') {
					dotCounter++;
				}
			}
		}
	}
	printf("%d %d", aCounter, dotCounter);
}

int main(int argc, char *argv[]) {
	char input[1000];
	int N = 0, i = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%s", input);
		villagesAndTribes(input);
	}
}

