#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_STUDENTS 100

struct Book {
    int id;
    char title[100];
    char author[100];
    int available;
};

struct Student {
    int id;
    char name[100];
    int borrowed[MAX_BOOKS];
    int num_borrowed;
};

void display_books(struct Book books[], int num_books) {
    printf("Book ID\tTitle\tAuthor\tAvailable\n");
    for (int i = 0; i < num_books; i++) {
        printf("%d\t%s\t%s\t%d\n", books[i].id, books[i].title, books[i].author, books[i].available);
    }
}

void display_students(struct Student students[], int num_students) {
    printf("Student ID\tName\n");
    for (int i = 0; i < num_students; i++) {
        printf("%d\t%s\n", students[i].id, students[i].name);
    }
}

int find_book(struct Book books[], int num_books, int book_id) {
    for (int i = 0; i < num_books; i++) {
        if (books[i].id == book_id) {
            return i;
        }
    }
    return -1;
}

int find_student(struct Student students[], int num_students, int student_id) {
    for (int i = 0; i < num_students; i++) {
        if (students[i].id == student_id) {
            return i;
        }
    }
    return -1;
}

void borrow_book(struct Book books[], int num_books, struct Student students[], int num_students, int book_id, int student_id) {
    int book_index = find_book(books, num_books, book_id);
    int student_index = find_student(students, num_students, student_id);
    if (book_index == -1) {
        printf("Book not found.\n");
        return;
    }
    if (student_index == -1) {
        printf("Student not found.\n");
        return;
    }
    if (books[book_index].available == 0) {
        printf("Book is not available for borrowing.\n");
        return;
    }
    if (students[student_index].num_borrowed == MAX_BOOKS) {
        printf("Student has borrowed the maximum number of books.\n");
        return;
    }
    books[book_index].available = 0;
    students[student_index].borrowed[students[student_index].num_borrowed++] = book_id;
    printf("Book borrowed successfully.\n");
}

void return_book(struct Book books[], int num_books, struct Student students[], int num_students, int book_id, int student_id) {
    int book_index = find_book(books, num_books, book_id);
    int student_index = find_student(students, num_students, student_id);
    if (book_index == -1) {
        printf("Book not found.\n");
        return;
    }
    if (student_index == -1) {
        printf("Student not found.\n");
        return;
    }
    int book_found = 0;
    for (int i = 0; i < students[student_index].num_borrowed; i++) {
        if (students[student_index].borrowed[i] == book_id) {
            book_found = 1;
            break;
        }
    }
        if(!book_found) {
        printf("Student has not borrowed this book.\n");
        return;
    }
    books[book_index].available = 1;
    for (int i = 0; i < students[student_index].num_borrowed; i++) {
        if (students[student_index].borrowed[i] == book_id) {
            students[student_index].borrowed[i] = students[student_index].borrowed[--students[student_index].num_borrowed];
            break;
        }
    }
    printf("Book returned successfully.\n");
}

int main() {
    struct Book books[MAX_BOOKS] = {
        { 1, "Book 1", "Chris", 1 },
        { 1, "Book 2", "Michael", 1 },
        { 1, "Book 3", "Brenda", 1 },
        { 1, "Book 4", "Anthony", 1 },
        { 1, "Book 5", "Alex", 1 },
        { 1, "Book 6", "Brian", 1 },
        { 1, "Book 7", "Pascal", 1 },
       
    };
    int num_books = 7;

    struct Student students[MAX_STUDENTS] = {
        { 1, "Brenda", {}, 0 },
        { 2, "Pascal", {}, 0 },
        { 3, "Mike", {}, 0 },
        { 4, "Chris", {}, 0 },
        { 5, "James", {}, 0 },
        { 6, "Anthony", {}, 0 },
        { 7, "Alex", {}, 0 },
        { 8, "Chris", {}, 0 },
    };
    int num_students = 8;

    printf("WELCOME TO THE STUDENTS LIBRARY MANAGEMENT SYSTEM.\n");

    while (1) {
        printf("Menu:\n");
        printf("1. Display available books\n");
        printf("2. Display registered students\n");
        printf("3. Borrow a book\n");
        printf("4. Return a book\n");
        printf("5. Exit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display_books(books, num_books);
                break;
            case 2:
                display_students(students, num_students);
                break;
            case 3: {
                int book_id, student_id;
                printf("Enter book ID: ");
                scanf("%d", &book_id);
                printf("Enter student ID: ");
                scanf("%d", &student_id);
                borrow_book(books, num_books, students, num_students, book_id, student_id);
                break;
            }
            case 4: {
                int book_id, student_id;
                printf("Enter book ID: ");
                scanf("%d", &book_id);
                printf("Enter student ID: ");
                scanf("%d", &student_id);
                return_book(books, num_books, students, num_students, book_id, student_id);
                break;
            }
            case 5:
                printf("Exiting the library management system.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

