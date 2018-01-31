#include <stdio.h>

int gcd(int a, int b) {
	if (a%b == 0) return b;
	else gcd(b, a%b);
}

void main() {

	int a = 1, b = 1;

	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);

	int lcm = (a*b) / gcd(a,b);

	printf("The least common multiple of %d and %d is %d.\n", a, b, lcm);


}
