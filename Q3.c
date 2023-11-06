#include <stdio.h>


struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    struct Book books[5];
    printf("Enter details of 5 books:\n");


    for (int i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Subject: ");
        scanf(" %[^\n]s", books[i].subject);
        printf("Book ID: ");
        scanf("%d", &books[i].book_id);
    }


    printf("\nDetails of the 5 books entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Subject: %s\n", books[i].subject);
        printf("Book ID: %d\n", books[i].book_id);
    }

    return 0;
}




