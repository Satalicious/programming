
/*
String Functions Implement the following functions:

void str_inverse_case(char str[]);  // "Hello World!" => "hELLO wORLD!"
// Return true if str starts with prefix, otherwise false.
bool str_starts_with(char str[], char prefix[]);
bool str_ends_with(char str[], char suffix[]);  // true if str ends with suffix
int str_count(char str[], char sub[]);  // number of occurences of sub in text
bool str_is_ascii(char str[]);  // true if string only has ascii chars
bool str_is_digit(char str[]);  // true if string only has digits
int str_index(char str[], char sub[]);  // pos. of first occ. of sub in str | -1

Design multiple appropriate test cases (input output combinations) before implementing the above functions. Call the functions from within main(.) to make sure that the test cases pass.
Name the source file: cstring.c 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void str_inverse_case(char str[]);
bool str_starts_with(char str[], char prefix[]); // Return true if str starts with prefix, otherwise false.
bool str_ends_with(char str[], char suffix[]);  // true if str ends with suffix
int str_count(char str[], char sub[]);  // number of occurences of sub in text
bool str_is_ascii(char str[]);  // true if string only has ascii chars
bool str_is_digit(char str[]);  // true if string only has digits
int str_index(char str[], char sub[]);  // pos. of first occ. of sub in str | -1

void str_inverse_case(char str[]){
    for (int i = 0; i < strlen(str); i++){
        if (islower(str[i]) != 0){
          str[i] = toupper(str[i]);
          printf("%c",str[i]);
          } else {
            str[i] = tolower(str[i]);
            printf("%c",str[i]);
          }
    } 
}

bool str_starts_with(char str[], char prefix[]) {
	bool isPrefix = false;
	
	for (int i = 0; i < strlen(prefix); i++) {
		if (str[i] == prefix[i]) {
			isPrefix = true;
		} else {
			isPrefix = false;
		}
	}
	
	return isPrefix;
}

bool str_ends_with(char str[], char suffix[]){
    int cnt = 0;

    for (int i = strlen(str)-strlen(suffix); i < strlen(str); i++){
        for (int j = 0; j < strlen(suffix); j++) {
        
        if (str[i] == suffix[j])
            cnt+=1;
        }
    }
    if (cnt == strlen(suffix))
        return true;
    else
        return false;
}

int str_count(char str[], char sub[]) {
    int occ = 0, cnt = 0;
    for (int i = 0; i < strlen(str)-1; i++){
        if (str[i] == sub[0]){
            for (int j = 0; j < strlen(sub)-1; j++) {
                if (str[i+j] == sub[j])
                    cnt+=1;
                if (cnt == strlen(sub)-1)
                    occ+=1;
                    cnt=0;
            }
        }
    }
    return occ;
}

bool str_is_ascii(char str[]) { // true if only ASCII characters
    bool isAscii = false;

    for (int i = 0; i < strlen(str)-1; i++) {
        if (str[i] > 127)
            return false;
    }
    return true;
}


bool str_is_digit(char str[]) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] <= 57 || str[i] >= 48)
            count+=1;
    }
    if (count == strlen(str))
        return true;
    else
        return false;
}

int str_index(char str[], char sub[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == *sub)
            return i+1;
    }
}


int main(){
  printf("=== Inverting case in a string ===\n");

  char inverse_case[] = "Hello World!";
	str_inverse_case(inverse_case);
  
  printf("\n=== Checking string's prefix ===\n");
    char str[] = "Hello World";
	char substr_1[] = "Hello";
	bool res = str_starts_with(str, substr_1);
	if (res == true) printf("true\n");
	else printf("false\n");
	char substr_2[] = "nHell";
	res = str_starts_with(str, substr_2);
	if (res == true) printf("true\n");
	else printf("false\n");	

printf("\n=== Checking string's suffix ===\n");
  
  char suffix1[] = " World";
  char suffix2[] = "Hello";
  bool res2 = str_ends_with(str, suffix1);
  if (res2 == true) printf("true\n");
  else printf("false\n");
  bool res3 = str_ends_with(str, suffix2);
  if (res3 == true) printf("true\n");
  else printf("false\n");

  printf("\n=== Counting string's occurences ===\n");
  char sub1[] = "el";
  char sub2[] = "qx";
  printf("Occurences: %d\n",str_count(str, sub1));  // number of occurences of sub in text
  printf("Occurences: %d\n",str_count(str, sub2));

  printf("\n=== Check if str is ASCII ===\n");
  bool res4 = str_is_ascii(str);  // true if string only has ascii chars
  if (res4) printf("true\n");
  else printf("false\n");

  char no_ascii[] = "&";
  bool res5 = str_is_ascii(no_ascii);
  if (res5) printf("true\n");
  else printf("false\n");

  
  str_is_digit(str);  // true if string only has digits
  
  str_is_digit("Hello World");
  
  str_index("Hello World", "o");  // pos. of first occ. of sub in str | -1
  
  return 0;
}