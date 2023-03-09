#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
typedef struct linkedList LinkedList;

void push_back() {
    // append new element to end
}  
void push_front() {  
    // append new element to beginning
}
void pop_back() {
    // remove and return last element
}  
void pop_front() {
    // remove and return first element
}  

struct node {
    Node *next;
    Node *prev;
    void* data;
};

struct linkedlist {
    Node head;
    Node tail;
    void (*push_back)(int);
    void (*push_front)(int);
    void (*pop_back)(int);
    void (*pop_front)(int);
};

LinkedList* initList() {
    LinkedList *list = (int*) malloc(sizeof(list));
    if (list == NULL) { fprintf(stderr, "malloc failed\n"); exit(EXIT_FAILURE); }
    list->push_back = &push_back;

    return list;
}


int main(int argc, char** argv) {
    LinkedList *list = initList();

    return 0;
}