#include <stdio.h>
#include <string.h>
struct Book {
    char title[100];
    char author[100];
    int id;
    int borrowed;
};

struct students {
    char student_ID[12];
};


void borrowBook(struct Book books[], int id, struct students *student) {
    int i;
    for (i = 0; i < 100; i++) {
        if (books[i].id == id) {
            if (books[i].borrowed == 0) {
                books[i].borrowed = 1;
                printf("Book borrowed successfully by student %s!\n", student->student_ID);
            } else {
                printf("Sorry, this book is already borrowed.\n");
            }
            return;
        }
    }
    printf("Sorry, book not found.\n");
}
void displayAvailableBooks(struct Book books[],int numBooks) {
    int i,count=0;
    
    printf("Available books for borrowing:\n");
    
    for (i = 0; i < numBooks; i++) {
        if (books[i].borrowed == 0) {
            printf("%d. %s by %s\n", books[i].id, books[i].title, books[i].author);
            count++;
        }
    }
    if (count == 0) {
        printf("Sorry, no books are currently available for borrowing.\n");
    }
}
void returnBook(struct Book books[], int id, struct students student) {
    int i;
    for (i = 0; i < 100; i++) {
        if (books[i].id == id) {
            if (books[i].borrowed == 1) {
                books[i].borrowed = 0;
                printf("Book returned successfully by student %s!\n", student.student_ID);
            } else {
                printf("Sorry, this book is not currently borrowed.\n");
            }
            return;
        }
    }
    printf("Sorry, book not found.\n");
}
int main() {
    struct Book books[100];
    struct students student;
    int numBooks = 0;
    int choice, bookID;
    
    printf("--------------------------------------------STUDENTS LIBRARY MANAGEMENT SYSTEM--------------------------------------------\n");

    do {
        printf("\n------------------Welcome to the students Library Management system. Enter your choice to continue.-----------------------\n");
        printf("1. Register a new book\n");
        printf("2. Borrow a book\n");
        printf("3. Return a book\n");
        printf("4. Display available books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numBooks >= 100) {
                    printf("Maximum number of books exceeded.\n");
                    break;
                }
                printf("Enter book title: ");
                getchar();
                fgets( books[numBooks].title,100,stdin);
                printf("Enter book author: ");
                fgets(books[numBooks].author,100,stdin);
                printf("Enter book ID: ");
                scanf("%d", &books[numBooks].id);
                books[numBooks].borrowed = 0;
                printf("Book registered successfully!\n");
                numBooks++;
                break;
            case 2:
                printf("Enter book ID to borrow: ");
                scanf("%d", &bookID);
                printf("Enter student ID: ");
                scanf("%s", student.student_ID);
                borrowBook(books, bookID, &student);
                break;
            case 3:
                printf("Enter book ID to return: ");
                scanf("%d", &bookID);
                printf("Enter student ID: ");
                scanf("%s", student.student_ID);
                returnBook(books, bookID, student);
                break;
            case 4:
                displayAvailableBooks(books, numBooks);
                break;
            case 5:
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}