#include <stdio.h>;
#include <locale.h>;

int main() {
	setlocale(LC_CTYPE, "RUS");
	int N, K;

	N = 14;
	K = 45;

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 23 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", ((N - 8) * 60 + K)) * 60;
	printf("Текущий час = %1.2f суток и текущая минута = %1.2f часа\n", N / 24., K / 60.);

	return 1;
}
