#include <stdio.h>
#include <math.h>

void main() {

	int a = 1;

	printf("Enter a number: ");
	scanf("%d", &a);

	int i = 2, prime = 1;
	while (i++ <= sqrt(a) && prime == 1) {
		if (a%i == 0) prime = 0;
	}

	if (prime == 0) printf("%d is not prime.\n",a);
	else printf("%d is prime.\n",a);
}
