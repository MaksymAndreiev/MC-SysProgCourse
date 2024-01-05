#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_READERS 3
#define NUM_WRITERS 2

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t can_read = PTHREAD_COND_INITIALIZER;
pthread_cond_t can_write = PTHREAD_COND_INITIALIZER;

int readers_count = 0;
int data = 0;

void* reader(void* arg) {
    int id = *(int*)arg;

    while (1) {
        pthread_mutex_lock(&mutex);
        while (readers_count == -1) {
            pthread_cond_wait(&can_read, &mutex);
        }

        readers_count++;
        pthread_mutex_unlock(&mutex);

        printf("Reader %d read data: %d\n", id, data);

        pthread_mutex_lock(&mutex);
        readers_count--;

        if (readers_count == 0) {
            pthread_cond_signal(&can_write);
        }

        pthread_mutex_unlock(&mutex);

        usleep(rand() % 1000000);
    }

    return NULL;
}

void* writer(void* arg) {
    int id = *(int*)arg;

    while (1) {
        pthread_mutex_lock(&mutex);
        while (readers_count > 0) {
            pthread_cond_wait(&can_write, &mutex);
        }

        readers_count = -1;

        pthread_mutex_unlock(&mutex);

        data++;
        printf("Writer %d wrote data: %d\n", id, data);

        pthread_mutex_lock(&mutex);
        readers_count = 0;
        pthread_cond_broadcast(&can_read);
        pthread_mutex_unlock(&mutex);

        usleep(rand() % 1000000);
    }

    return NULL;
}

int main() {
    pthread_t readers[NUM_READERS];
    pthread_t writers[NUM_WRITERS];
    int reader_ids[NUM_READERS];
    int writer_ids[NUM_WRITERS];

    for (int i = 0; i < NUM_READERS; ++i) {
        reader_ids[i] = i + 1;
        pthread_create(&readers[i], NULL, reader, &reader_ids[i]);
    }

    for (int i = 0; i < NUM_WRITERS; ++i) {
        writer_ids[i] = i + 1;
        pthread_create(&writers[i], NULL, writer, &writer_ids[i]);
    }

    for (int i = 0; i < NUM_READERS; ++i) {
        pthread_join(readers[i], NULL);
    }

    for (int i = 0; i < NUM_WRITERS; ++i) {
        pthread_join(writers[i], NULL);
    }

    return 0;
}
