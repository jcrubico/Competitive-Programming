#include <stdio.h>

int revANum(int N);

int main(int argc, char *argv[]) {
	int result = revANum(1024);
	printf("Result: %d", result);
}

int revANum(int N) {
	int rev = 0, mod = 0;
	while (N > 0) {
		mod = N % 10;
		rev = rev * 10 + mod;
		N = N / 10;
	}
	return rev;
}

