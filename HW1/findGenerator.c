#include <stdio.h>
#include <math.h>

void main() {

	int p = 1;

	printf("Enter a prime number: ");
	scanf("%d", &p);

	int g = 1, isGen = 0;

	while (isGen == 0 && g++ < p) {
		for (int r=0;r<p-1;r++) {
			if ((int)pow(g,r)%p != 1) isGen = 1;
			else isGen = 0;
		}
	
	}

	printf("%d is a generator of Z_%d\n.", g, p);

}
