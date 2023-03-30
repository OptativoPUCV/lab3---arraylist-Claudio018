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
    if(l->size == l->capacity){
        l->capacity *= 2;
        l->data = realloc(l->data,sizeof(void *) * l->capacity);
        l->data[l->size] = data;
        (l->size)++;
    }
    else{
        l->data[l->size] = data;
        (l->size)++;
    }
}

void push(ArrayList * l, void * data, int i){
    if(l->size == l->capacity){
        l->capacity *= 2;
        l->data = realloc(l->data,sizeof(void *) * l->capacity);
    }
    if(i <= l->size)
    {
        for(size_t k = l->size ; k > i ; k--)
        {
             l->data[k] = l->data[k-1];
        }
        l->data[i] = data;
        (l->size)++;
    }
}

void* pop(ArrayList * l, int i){
    void *data;
    if(i >= 0)
    {
        data = l->data[i];
        for(size_t k = i ; k < l->size ; k++)
        {
            l->data[k] = l->data[k+1];
        }
        return data;
    }
    else{
        data = l->data[l->size + i]
        for(size_t k = l->size + i ; k < l->size ; k++)
        {
            l->data[k] = l->data[k+1];
        }
        return data;
    }
    return NULL;
}

void* get(ArrayList * l, int i){
    if(i >= l->size)
        return NULL;
    else
        if(i >= 0)
            return l->data[i];
        else{
            return l->data[(l->size + i)];
        }
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
