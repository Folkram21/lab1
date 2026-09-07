#include <stdio.h>;
#include <locale.h>;

int main() {
	setlocale(LC_CTYPE, "RUS");

	// числа для деления
	float n, L;
	n = 3;
	L = 313;

	// кол-во цифр в целой (k) и дробной (m) части
	int k, m;
	k = 4;
	m = 2;

	// вывод результата деления
	printf("Дано:\n\tN = %1.0f\n\tl = %1.0f\n\n", n, L);
	printf("Ответ:\n\tn / L = %-+*.*f\n", k, m, n / L);

	return 1;
}
