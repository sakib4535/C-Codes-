#include<stdio.h>
#include<stdlib.h>

/*Function Declarations*/

void print_int_by_reference(int *num_ptr);
void print_int_by_value(int number);
void malloc_int_dangerous(int *num_ptr);
void malloc_int_safe(int** num_ptr) {          /*This Safe Function implemetation is important before main function*/
    // Allocate memory for an int using malloc
    int* new_ptr = malloc(sizeof(int));
    if (new_ptr != NULL) {
        // Set the value of the original pointer to point to the newly allocated memory
        *num_ptr = new_ptr;
    } else {
        // Handle error: allocation failed
        printf("Error: unable to allocate memory.\n");
    }
}


int main(){
    // Give example of passing an int via a pointer instead of by value

    int my_number = 10;

    print_int_by_value(my_number);
    print_int_by_reference(&my_number);
    printf("The Address printed above should be different!\n");

    int* num_ptr = &my_number;
    printf("number_ptr address before malloc: %p\n", num_ptr);

    // 1. Create function that takes in a pointer to an int, attempts to malloc memory for it and return the pointer
    // this will not work (memory will leak) because the pointer passed in points to memory on the stack
    
    // Dangerous version
    malloc_int_dangerous(num_ptr);
    printf("Original num_ptr address after dangerous malloc: %p\n", num_ptr);
    printf("The above address for num_ptr doesn't change\n");

    // Safe version
    malloc_int_safe(&num_ptr);
    printf("Original num_ptr address after safe malloc: %p\n", num_ptr);

    // Free allocated memory
    free(num_ptr);

    return 0;
}

void print_int_by_value(int number){
    printf("Value of int passed by value: %d\n", number);
}

void print_int_by_reference(int *num_ptr){
    printf("Value of int passed by reference: %d\n", *num_ptr);
    *num_ptr = 20; // Modifies the value of the int indirectly through the pointer
}

void malloc_int_dangerous(int *num_ptr){
    int *new_ptr = malloc(sizeof(int));
}