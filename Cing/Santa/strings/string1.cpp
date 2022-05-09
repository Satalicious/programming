

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()

{
	char input_text[] = "The world is beautiful";
	unsigned short index = 0;
	while (input_text[index]) {
		if (index == 0)
			input_text[index] = toupper(input_text[index]);
		if (input_text[index] == 32)
			input_text[index+1] = toupper(input_text[index+1]);
		index++;
	}
	printf("input text is: %s", input_text);
	return 0;
}