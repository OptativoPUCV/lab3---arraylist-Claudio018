#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
    ArrayList* nuevo = (ArrayList *) malloc(sizeof(ArrayList));
    nuevo->data = NULL;
    nuevo->capacity = 2;
    nuevo->size = 0;
    nuevo->data = (void **) malloc(sizeof(void *)*nuevo->capacity);
    return nuevo;
}

void append(ArrayList * l, void * data){
    if(size == capacity){
        l->capacity *= 2;
        l->data = realloc(l->data,l->capacity);
        l->data[l->size] = data;
        (l->size)++;
    }
    else{
        l->data[l->size] = data;
        (l->size)++;
    }
}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
