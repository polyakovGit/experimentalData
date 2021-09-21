#include <iostream>

int fact(int n) {
	int result = 1;
	for (size_t i = 2; i <= n; ++i)
		result *= i;
	return result;
}

int binomial(int n, int k) {
	return fact(n) / (fact(k) * fact(n - k));
}

int main() {
	return 0;
}