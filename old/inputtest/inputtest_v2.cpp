
#include <stdio.h>

int main(void)
{
	// printf("Hello World\n");

	printf("Please tell me something\n");

	char input[64];

	gets(input);
	printf("Mm...You typed '%s' \n", input);



}
