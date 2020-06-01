#include<stdio.h>
#include<string.h>
int main() {

	char str[2500];
	int i;
	printf("Enter the string: ");
	gets(str);

	for (i = 0; i <= strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
	}
	printf("\nLower Case String is: %s", str);
	return 0;
}
