#include <stdio.h>
#include <stdlib.h>

#define ARR_INC_SIZE 1000;

typedef struct{
    int* values;
    int size;
    int max_size;
} int_array;

int_array* int_array_init(int initial_size){
    int_array* arr = malloc(sizeof(int_array));
    arr->size = 0;
    arr->max_size = initial_size;
    arr->values = malloc(sizeof(int) * arr->max_size);

    return arr;
}

void int_array_push(int_array* arr, int val){
    if(arr->size == arr->max_size){
        arr->max_size += ARR_INC_SIZE;
        arr->values = realloc(arr->values, sizeof(int) * arr->max_size);
    }
    arr->size += 1;
    arr->values[arr->size] = val;
}

void array_free(int_array* arr){
    free(arr->values);
    arr->values = NULL;
    free(arr);
}

int int_array_get(int_array* arr, int index) {
    if (index > arr->size)
        return -1;

    return arr->values[index];
}

int main(){
    int_array* arr = int_array_init(10);
    int_array_push(arr, 1);

    int temp;

    for (int i = 0; i < 500000000; i++) {
        int_array_push(arr, i);
    }

    printf("%d\n", int_array_get(arr, 3242));

    scanf("%d", &temp);
    printf("Liberando espaco\n");


    printf(";)");

    array_free(arr);

    return 0;
}
