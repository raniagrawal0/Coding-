#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

struct Journal {
    string title;
    string publisher;
    int year;
};

Book books[100];
Journal journals[100];

int bookCount = 0;
int journalCount = 0;

void addBook() {
    if (bookCount < 100) {
        cout << "Enter book title: ";
        cin >> books[bookCount].title;
        cout << "Enter book author: ";
        cin >> books[bookCount].author;
        cout << "Enter book year: ";
        cin >> books[bookCount].year;
        bookCount++;
        cout << "Book added successfully!" << endl;
    } else {
        cout << "No more space to add books!" << endl;
    }
}

void addJournal() {
    if (journalCount < 100) {
        cout << "Enter journal title: ";
        cin >> journals[journalCount].title;
        cout << "Enter journal publisher: ";
        cin >> journals[journalCount].publisher;
        cout << "Enter journal year: ";
        cin >> journals[journalCount].year;
        journalCount++;
        cout << "Journal added successfully!" << endl;
    } else {
        cout << "No more space to add journals!" << endl;
    }
}

void displayBooks() {
    if (bookCount == 0) {
        cout << "No books available!" << endl;
    } else {
        cout << "List of Books:" << endl;
        for (int i = 0; i < bookCount; i++) {
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Year: " << books[i].year << endl;
            cout << endl;
        }
    }
}

void displayJournals() {
    if (journalCount == 0) {
        cout << "No journals available!" << endl;
    } else {
        cout << "List of Journals:" << endl;
        for (int i = 0; i < journalCount; i++) {
            cout << "Title: " << journals[i].title << endl;
            cout << "Publisher: " << journals[i].publisher << endl;
            cout << "Year: " << journals[i].year << endl;
            cout << endl;
        }
    }
}

int main() {
    int choice;
    while (true) {
        cout << "Library Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Add Journal" << endl;
        cout << "3. Display Books" << endl;
        cout << "4. Display Journals" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                addJournal();
                break;
            case 3:
                displayBooks();
                break;
            case 4:
                displayJournals();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}