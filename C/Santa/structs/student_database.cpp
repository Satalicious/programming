
/*
https://bulme.find-santa.eu/exercises/c/exercise_structs/
2. Student Data
Implement a struct that stores information about a student in a new type called Student. 
Each student has a char first_name[30], char last_name[50] and a unsigned long id. 
Implement the following functions:
            Student read_student();  // read student information from stdin
            // print one student per line to stdout
            void print_students(Student students[], size_t dimension);
In main(.) ask the user how many students should be stored. 
Create an array holding the correct number of students and 
fill the array by repeatedly calling read_student(). 
Once finished, print your in-memory student database to stdout.
*/

#include <stdio.h>

typedef struct {
    char first_name[30];
    char last_name[50];
    unsigned long id;
} Student;

Student read_student() {
    Student entries;
    char idsize[10];
    printf("Enter first name of the student: ");
    fgets(entries.first_name,sizeof(entries.first_name), stdin);
    printf("Enter last name of the student: ");
    fgets(entries.last_name,sizeof(entries.last_name), stdin);
    printf("Enter student id: ");
    fgets(idsize,sizeof(idsize),stdin);
    sscanf(idsize,"%lu",&entries.id);
    return entries;
}
void print_students(Student students[], size_t dimension) {
    for (int i = 0; i < dimension; i++) {
        printf("%d : %s    %s    %lu",i+1,students[i].first_name,students[i].last_name,students[i].id);
        printf("\n");
    }
}

int main() {
    int stusize = 0;
    char db[10];
    printf("How many students should be stored in the database?\n");
    fgets(db,sizeof(db),stdin);
    sscanf(db,"%d",&stusize);
    Student students[stusize];
    for (int i = 0; i < stusize; i++)
        students[i] = read_student();  // read student information from stdin
    print_students(students, stusize);
    return 0;
}