#include <stdio.h>

int change_binary(int n) {
	if (n == 1)
		return 1;
	else
		printf("%d ", change_binary(n / 2));
		return n % 2;
}
int main(void) {
	int num = 0;
	printf("Please enter a number : ");
	scanf("%d", &num);
	printf("%d", change_binary(num));
	return 0;
}