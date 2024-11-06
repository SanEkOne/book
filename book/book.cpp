#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;

#include "ArrayFunctions.h"



void main() {
    int amountOfBooks = 4;
    char** str = new char* [amountOfBooks];

    for (int i = 0; i < amountOfBooks; i++) {
        str[i] = new char[12];
        cout << "Enter a name of book: ";
        cin.getline(str[i], 12);
    }

    while (true) {
        cout << "1 - Add a book\n2 - Rename book\n3 - Delete book\n4 - Exit application\n5 - Show all books";
        int result;
        cin >> result;
        cin.ignore();

        if (result == 1) {

            PrintNewBook(str, amountOfBooks);

        }
        else if (result == 2) {
            // Запуск функції переіменування книги
        }
        else if (result == 3) {
            // Запуск функції видалення книги
        }
        else if (result == 4) {
            exit(0);
        }
        else if (result == 5) {
            PrintDynamicBooks(str, amountOfBooks);
        }
        else {
            cout << "Incorrect value\n";
        }

    }
}