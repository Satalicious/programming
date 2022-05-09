

#include <stdio.h>
#include <string.h>

bool beginsWith(char prefix[], char string[]) {
	int len_prefix = strlen(prefix), len_string = strlen(string), matcher = 0;
	bool isPrefix = false;

	for (int i = 0; i < len_prefix; i++) {
		for (int j = 0; i < len_string; i++) {
			if (prefix[i] == string[i])
				matcher += 1;
		}
	}
	if (matcher == len_prefix)
		isPrefix = true;

	return isPrefix;
}



void main(void) {
	char prefix1[] = "Al";
	char string1[] = "Aline";
	char string2[] = "Hello World!";
	bool res = beginsWith(prefix1, string1);
	if (res == true) printf("true\n");
	else printf("false\n");
	
	//printf("%zd\n", l_str1);
}