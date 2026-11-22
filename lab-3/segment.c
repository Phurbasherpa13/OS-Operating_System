#include <stdio.h>
#include <stdlib.h>

int data_intialized_global = 10;
int bss_uninitialized_global;

int main() {
    int stack_intialized_local = 20;
    int *heap_var = (int *)malloc(sizeof(int));
    *heap_var = 30;

    printf("Address of data segment variable: %p\n", (void*)&data_intialized_global);
    printf("Address of BSS segment variable: %p\n", (void*)&bss_uninitialized_global);
    printf("Address of stack variable: %p\n", (void*)&stack_intialized_local);
    printf("Address of heap variable: %p\n", (void*)heap_var);

    free(heap_var);
    return 0;
}  