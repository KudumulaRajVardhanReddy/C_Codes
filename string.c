#include <stdio.h>
#include <string.h>

int main() {
	char a[40] = "Hello World, ";
	char b[13] = "How are you?";
	char c[1] = "h";
	char d[1] = "H";
	char e[2] = "hi";

	printf("%d", strcmp(a, b));
	printf("\n");

	printf("%d", strncmp(a,c,1));
	printf("\n");
	
	strcat(a, b);
	printf("%s", a);
	printf("\n");

	strcpy(a,b);
	printf("%s", a);
	printf("\n");

	return 0;
}
