#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int a, b, c, d;
	char buf[32];

	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	sprintf(buf, "%lld%lld %lld%lld", a, b, c, d);
	sscanf(buf, "%lld %lld", &a, &b);
	printf("%lld\n", a + b);

	return 0;
}