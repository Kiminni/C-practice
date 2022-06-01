#include <stdio.h>

void func(char a, char *b, int c, double d);

int main () 
{
	char c = 'A';
	char *str = "ABCD";
	int num1 = 10;
	double num2 = 3.14;

	func(c, str, num1, num2);
		
	return 0;
}

void func(char a, char *b, int c, double d) {
	printf("%c %s %d %.2lf\n", a, b, c, d);
}