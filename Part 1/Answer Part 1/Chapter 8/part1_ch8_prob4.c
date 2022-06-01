#include <stdio.h>
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 2)
			printf("%d ", i);
		else
			continue;
	}
	
	printf("\n");
	return 0;
}