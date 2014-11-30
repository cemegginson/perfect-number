#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(long long int x);

int main() {
	long long int p, mersenne, perfect;

	for(p = 3; 1; p += 2) {
		mersenne = pow(2, p) - 1;

		if(is_prime(mersenne)) {
			perfect = (mersenne *(mersenne + 1)) / 2;
			printf("%i", mersenne);
		}
	}
	return 0;
}

bool is_prime(long long int x) {
	long long int root = (long long) sqrtl(x);
	long long int i;

	for(i = 3; i < root; i += 2) {
		if(x % i ==0) {
			return 0;
		}
	}
	return 1;

}
