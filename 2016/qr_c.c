#include <stdbool.h>
#include <stdio.h>

bool good(int base, unsigned char buf, int n) {
	return true;
}

void solve(int n, int j) {
	unsigned char buf[n] = {0};
	buf[0] = 1;
	buf[n-1] = 1;
	int i = 1;
	for (;;) {
		bool all_good = true;
		for (int b = 2; i <= 10; i++) {
			if (!good(b, buf, n)) {
				all_good = false;
				break;
			}
		}
	}
}

int main(void) {
	int n, j;
	while (getc() != '\n');
	scanf("%d", &n);
	scanf("%d", &j);
	puts("Case #1:");
	solve(n, j);
}
