#include <stdio.h>
 
int min(int a, int b) {
	return (a < b) ? a : b;
}
 
int max(int a, int b) {
	return (a > b) ? a : b;
}
 
int main(int argc, char *argv[]) {
	int T = 0;
	int A = 0, B = 0, C = 0, D = 0;
	int N = 0;
	scanf("%d", &T);
	int turns = 0;
	while (T > 0) {
		scanf("%d%d%d", &A, &B, &N);
		C = A;
		D = B;
		for (turns = 1; turns <= N; turns++) {
			int pick = turns % 2;
			if (pick) {
				A *= 2;
				C = A;
			}
			if (!pick) {
				B *= 2;
				D = B;
			}
		}
		int aggregate = max(C, D) / min(C, D);
		printf("%d\n", aggregate);
		T--;
	}
}
