#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int A, B, R, G, L, a, b;

	long long int x, y;
	scanf("%lld %lld", &x, &y);

	A = x;
	B = y;
	if (A < B)
	{
		A ^= B;
		B ^= A;
		A ^= B;
	}

	R = -1;
	while (1)
	{
		R = A % B;
		A = B;
		B = R;
		if (B == 0) break;
	}

	G = A;
	A = x;
	B = y;
	a = A / G;
	b = B / G;
	L = G * a * b;

	printf("%lld\n%lld\n", G, L);

	return 0;
}