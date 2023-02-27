#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]){
    int my_num = 19;

    int *my_ptr;

    my_ptr = &my_num;

    char *name = (char*)malloc(9 * sizeof(char));

    printf("My Value: %d\n", *my_ptr);

    int my_copy = *my_ptr;

    printf("Value of My_copy: %d\n", my_copy);

    *my_ptr = 20;
    printf("My value: %d\n", *my_ptr);

    free(name);
    return 0;
}