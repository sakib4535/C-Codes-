#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
    int count = 10;
    int *my_ptr = (int*)malloc(count *sizeof(int)); /*pointer arithmatic*/

    // 1. Simple Pointer Addition
    for(int i = 0; i < count; i++){
        printf("my_ptr address: %p\n", my_ptr + i);
    }
    
    int initial_value = 5;
    for(int i = 0; i < count; i++) {
        *(my_ptr + i) = initial_value++;
        printf("my_ptr position %d value: %d\n", i, *(my_ptr + i));
    }

    int *my_other_ptr = (int*)malloc(count * sizeof(int));

    printf("my_other_ptr address: %p\n", my_other_ptr);

    for(int i = 0; i < count; i++){
        printf("my_other ptr address: %p\n", my_other_ptr++);
    }

    my_other_ptr -= count; // Reset pointer to original value
    printf("Still expecting this to be the start address of the malloc block: %p\n", my_other_ptr);

    return 0;
}
