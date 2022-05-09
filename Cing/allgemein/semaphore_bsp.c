#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//Libraries you need to work with semaphore//
#include <pthread.h>
#include <semaphore.h>                    //Klasse Fehlt
/////////////////////////////////////////////

#define THREAD_NUM 12
#define SEMAPHORE_NUM 1   //passt der Wert

sem_t my_semaphore;


//Unsere Loggin Queue
void* my_queue(void* args){

    printf("(%d) Waiting in the loging queue\n", *(int*)args);
    sem_wait(&my_semaphore);                    //Hier fehlt eine der wichtigsten Funktionen
    printf("(%d) Logged in\n", *(int*)args);
    sleep(rand() % 5 + 1);                      //generiert eine random Nummer zwischen 1 und 5.
    printf("(%d) Logged out\n", *(int*)args);
    sem_post(&my_semaphore);                    //Hier fehlt eine der wichtigsten Funktionen
    free(args);
}


int main(){

    //Inizialise the Threads and my Semaphore//
    pthread_t my_threads[THREAD_NUM];
    sem_init(&my_semaphore, 0, SEMAPHORE_NUM);  //überprüfe lieber die Defines


    //Creating my Threads//
    for(int i = 0; i < THREAD_NUM; i++){
        int *a = malloc(sizeof(int));
        *a = i;
        if(pthread_create(&my_threads[i], NULL, &my_queue, a) != 0)
            printf("Error by executing pthread_create!\n");
    }

    //Joining my Threads//    //Join hier die Threads. Bonus wenn du 
    //darauf schaust ob es funktioniert hat
    for (int i = 0; i < THREAD_NUM; i++) {
        if(pthread_join(my_threads[i], NULL) != 0) 
            printf("Error by executing pthread_create!\n");
    }

    //Destroing my Semaphore//
    sem_destroy(&my_semaphore);

    return 0;
}