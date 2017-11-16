#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char data[100000];
	int T = 0;
	scanf("%d", &T);
	int i = 0, j = 0, k = 0;
	int foundA = 0, foundB = 0;
	int counterA = 0, counterB = 0;
	int dotA = 0, dotB = 0;
	int sumA = 0, sumB = 0;
	int stateA = 0, stateB = 0;
	for (i = 1; i <= T; i++) {
		scanf("%s", data);
		int stringLength = strlen(data);
		for (j = 0; j < stringLength; j++) {
			char ch = data[j];
			
			if (ch == 'A' && !foundA) {
				counterA++;
				foundA = 1;
			} else if (ch == '.' && foundA) {
				dotA++;
			} else {
				if (ch == 'A' && foundA) {
					counterA++;
					foundA = 0;
					for (k = j + 1; k < stringLength; k++) {
						if (data[k] == 'A') {
							foundA = 1;
							break;
						}
						if (data[k] == 'B') {
							foundA = 0;
							break;
						}
					}
				}
			} 
			
			if (ch == 'B' && !foundB) {
				counterB++;
				foundB = 1;
			} else if (ch == '.' && foundB) {
				dotB++;
			} else {
				if (ch == 'B' && foundB) {
					counterB++;
					foundB = 0;
					for (k = j + 1; k < stringLength; k++) {
						if (data[k] == 'A') {
							foundB = 0;
							break;
						}
						if (data[k] == 'B') {
							foundB = 1;
							break;
						}
					}
				}
			}
			printf("%d %d %d %d\n", counterA, dotA, counterB, dotB);
		}
		
		dotA = 0;
		foundA = 0;
		sumA = 0;
		counterA = 0;
		stateA = 0;
		
		dotB = 0;
		foundB = 0;
		sumB = 0;
		counterB = 0;
		stateB = 0;
	}
}

