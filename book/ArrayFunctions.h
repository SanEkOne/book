void PrintDynamicArray(char* str) {
    for (int i = 0; i < strlen(str) + 1; i++) {
        cout << str[i] << endl;
    }
}

void PrintDynamicBooks(char** str, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
}
void PrintNewBook(char** str, int n) {
    char** tempArr = new char* [n];
    for (int i = 0; i < n; i++) {
        tempArr[i] = new char[strlen(str[i]) + 1];
        for (int j = 0; j < strlen(str[i]) + 1; j++) {
            tempArr[i][j] = (char)str[i][j];
        }

        delete[] str[i];
        str[i] = nullptr;

        cout << tempArr[i] << endl;
    }

    delete[] str;
    str = nullptr;

    n++;

    str = new char* [n];

    for (int i = 0; i < n - 1; i++) {
        str[i] = new char[strlen(tempArr[i]) + 1];
        str[i] = tempArr[i];

        cout << str[i] << endl;
    }

    str[n - 1] = new char[12];

    cout << "Add new book\n";

    cin.getline(str[n - 1], 12);
}