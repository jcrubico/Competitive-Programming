#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char sFirst[1000];
	char sSecond[1000];	
	int N = 0, i = 0, j = 0, k = 0;
	int isFound = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		isFound = 0;
		scanf("%s%s", sFirst, sSecond);
		for (j = 0; j < strlen(sFirst); j++) {
			for (k = 0; k < strlen(sSecond); k++) {
				if (sFirst[j] == sSecond[k]) {
					isFound = 1;
					break;
				}
			}
			if (isFound) {
				break;
			}
		}
		if (isFound) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
}

