#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	unsigned int a = 015, b = 0x2b;
	printf("%llu\n%llu\n%llu", ~a, ~b, (~a) + (~b));
	return 0;
}