
/*
https://bulme.find-santa.eu/exercises/c/exercise_pointers/
Implement the following functions: */
#include "stdio.h"
#include "ctype.h"

void toupper2(char *array) {
    while (*array) {
        if (*array == 32)
            array++;
        if (islower(*array)) {
            *array = toupper(*array);
            array++;
        }
    }
}
void to_upper(char* array) {
    while (*array) {
        *array = toupper(*array);
        array++;
    }
}
bool has_upper(char* array) {
    while (*array) {
        if (isupper(*array))
            return true;
        array++;
    }
    return false;
}
bool is_upper(char* array) {
    while(*array) {
        if (*array == 32)
            array++;
        if (!isupper(*array))
            return false;
        array++;
    }
    return true;
}
void to_lower(char* array) {
    while (*array) {
        *array = tolower(*array);
        array++;
    }
}
bool has_lower(char* array) {
    while (*array) {
        if (*array == 32)
            array++;
        if (islower(*array))
            return true;
        array++;
    }
    return false;
}
bool is_lower(char* array) {
    while (*array) {
        if (*array == 32)
            array++;
        if(!islower(*array))
            return false;
        array++;
    }
    return true;
}

int main() {
    char phrase[] = {"Das Haus von Nikolaus"};

    char *phrase_pointer = &phrase[0];
    toupper2(phrase_pointer);
    printf("to_upper2 conversion: %s\n",phrase_pointer);
    
    to_upper(phrase);
    printf("to_upper conversion: %s\n",phrase);

    bool hupper = has_upper(phrase);
    printf("has_upper: %s\n", hupper ? "true" : "false");

    bool iupper = is_upper(phrase);
    printf("is_upper: %s\n", iupper ? "true" : "false");

    to_lower(phrase);
    printf("to_lower conversion: %s\n", phrase);

    bool hlower = has_lower(phrase);
    printf("has_lower: %s\n", iupper ? "true" : "false");

    bool ilower = is_lower(phrase);
    printf("is_lower: %s\n", iupper ? "true" : "false");
    return 0;
}