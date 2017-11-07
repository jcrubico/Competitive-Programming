#include <stdio.h>

int F(int N);

int main(int argc, char *argv[]) {
	int i = 0;
	for (i = 0; i <= 12; i++) {
		int N = F(i);
		printf("%d ", N);
	}	
}

int F(int N) {
	if (N == 0) {
		return 1;
	} else if (N == 1) {
		return 1;
	} else if (N == 2) {
		return 2;
	} else {
		return F(N - 1) + F(N - 2);
	}
}

