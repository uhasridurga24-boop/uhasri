#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    char name[100];
    char author[50];
    int pages;
    float price;
};

int main() {
    struct Book *book_ptr;
    book_ptr = (struct Book *)malloc(sizeof(struct Book));
    if (book_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    strcpy(book_ptr->name, "The C Programming Language");
    strcpy(book_ptr->author, "Dennis Ritchie & Brian Kernighan");
    book_ptr->pages = 272;
    book_ptr->price = 550.75;
    printf("--- Book Details (using DMA) ---\n");
    printf("Book Name: %s\n", book_ptr->name);
    printf("Author: %s\n", book_ptr->author);
    printf("No. of Pages: %d\n", book_ptr->pages);
    printf("Price: %.2f\n", book_ptr->price);
    free(book_ptr);
    printf("\nMemory successfully freed.\n");

    return 0;
}
