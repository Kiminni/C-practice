#include <stdio.h>
#include <string.h>

int main () {

	char str[32] = "";
	int i = 0;
	int transGap = 'a' - 'A';

	printf("Enter string: ");
	scanf("%s", str);

	printf("Length of string : %d\n", strlen(str));

	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') str[i] -= transGap;
		else if (str[i] >= 'A' && str[i] <= 'Z') str[i] += transGap;
	}

	printf("Result string : %s\n", str);

	return 0;
}
