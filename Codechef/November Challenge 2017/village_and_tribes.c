#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char data[100000];
	int T = 0;
	scanf("%d", &T);
	int i = 0, j = 0, k = 0;
	int counterA = 0, counterB = 0;
	int tempSumA = 0, tempSumB = 0;
	int flagA = 0, flagB = 0;
	for (i = 1; i <= T; i++) {
		scanf("%s", data);
		int stringLength = strlen(data);
		for (j = 0; j < stringLength; j++) {
			char ch = data[j];
			if (ch == 'A') {
				counterA++;
				counterA += tempSumA;
				flagA = 1;
				flagB = 0;
				tempSumA = 0;
				tempSumB = 0;
			}
			if (ch == 'B') {
				counterB++;
				counterB += tempSumB;
				flagA = 0;
				flagB = 1;
				tempSumA = 0;
				tempSumB = 0;
			}
			if (ch == '.' && flagA) {
				tempSumA++;
			}
			if (ch == '.' && flagB) {
				tempSumB++;
			}
		}
		printf("%d %d\n", counterA, counterB);
		counterA = 0;
		counterB = 0;
		tempSumA = 0;
		tempSumB = 0;
		flagA = 0;
		flagB = 0;
	}
}

