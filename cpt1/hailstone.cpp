#include <stdio.h>

/*
 * 这不是算法，因为在有限的计算时间内，并不是所有的数都能算出最后的结果。
 * 不符合算法的有穷性
 */
// Hailstone
int hailstone(int n) {
	int length = 1;
	while (n > 1) {
		(n % 2) ? n = 3 * n + 1 : n = n / 2;
		++length;
	}
	return length;
}

int main() {
	int i;
	scanf("%d", &i);
	printf("%d\n", hailstone(i));
}
