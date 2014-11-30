#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(long long int x);

int main() {
	long long int p, mersenne, perfect;

	for(p = 2; 1; p++) {
		mersenne = powl(2, p) - 1;

		if(is_prime(mersenne)) {
			perfect = powl(2, p-1) * mersenne;
			printf("%s %i\n", "Mersenne Prime: ", mersenne);
			printf("%s %i\n", "Perfect Number: ", perfect);
		}
	}
	return 0;
}

bool is_prime(long long int x) {
	long long int root = (long long) sqrtl(x);
	long long int i;

	if(x == 2) {
		return 1;
	}

	for(i = 3; i < root; i += 2) {
		if(x % i ==0) {
			return 0;
		}
	}
	return 1;

}
