#include <stdio.h>;
#include <locale.h>;

int main() {
	setlocale(LC_CTYPE, "RUS");

	float N, l;
	N = 3;
	l = 313;

	int k, m;
	k = 4;
	m = 2;

	printf("Дано:\n\tN = %1.0f\n\tl = %1.0f\n\n", N, l);
	printf("Ответ:\n\t%-+*.*f\n", k, m, N / l);

	return 1;
}
