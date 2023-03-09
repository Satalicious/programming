#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//Libraries you need to work with semaphore//
#include <pthread.h>
#include <semaphore.h>
/////////////////////////////////////////////

#define THREAD_NUM 10
#define SEMAPHORE_NUM 1

sem_t my_semaphore;


void* print_something(void* args){
    sem_wait(&my_semaphore);
    sleep(1);
    printf("Hello from thread %d\n", *(int*)args);
    sem_post(&my_semaphore);
    free(args);
}


int main(){

    //Inizialise the Threads and my Semaphore//
    pthread_t my_threads[THREAD_NUM];
    sem_init(&my_semaphore, 0, SEMAPHORE_NUM);


    //Creating my Threads//
    for(int i = 0; i < THREAD_NUM; i++){
        int *a = malloc(sizeof(int));
        *a = i;
        if(pthread_create(&my_threads[i], NULL, &print_something, a) != 0)
            printf("Error by executing pthread_create!\n");
    }

    //Joining my Threads//
    for(int i = 0; i < THREAD_NUM; i++){
        if(pthread_join(my_threads[i], NULL) != 0)
            printf("Error by executing pthread_join!\n");
    }

    //Destroing my Semaphore//
    sem_destroy(&my_semaphore);

    return 0;
}