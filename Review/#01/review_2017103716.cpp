#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

void get_command(string& command) {
    cout << "1. Generate matrix" << endl;
    cout << "2. Print matrix" << endl;
    cout << "3. Sort matrix" << endl;
    cout << "4. Save matrix" << endl;
    cout << "0. Exit program" << endl;
    cin >> command;
}

void get_size(int& size) {
    cout << "Enter the size in (size x size): ";
    cin >> size;
    cout << endl;
}

int** gen_matrix(int size) {
    int nRow = size;
    int nCol = size;
    int** matrix2 = new int*[nRow];
    for (int i = 0; i < nRow; i++) {
        matrix2[i] = new int[nCol];
        for (int j = 0; j < nCol; j++){
            matrix2[i][j] = rand() % 101;
        }
    }
    return matrix2;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int* ary, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (ary[j] < ary[j - 1])
                swap(ary[j], ary[j - 1]);
        }
    }
}

void sort_matrix_row(int** matrix, int size) {
    int* ary;
    for (int row = 0; row < size; row++) {
        ary = matrix[row];
        sort_array(ary, size);
    }
    cout << "Completed" << endl << endl;
}

void print_matrix(int** matrix, int size) {
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++)
            cout << setw(4) << matrix[row][col];
        cout << endl; 
    }
    cout << endl;
}

void save_matrix(int** matrix, int size) {
    ofstream fout;
    fout.open("matrix.txt");
    if (!fout) {
        cout << "Error" << endl;
        exit(100);
    }
    fout << size << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++)
            fout << setw(4) << matrix[row][col];
        fout << endl; 
    }
    cout << "Saved" << endl << endl;
    fout.close();
}

void free_matrix(int** matrix, int size) {
    for (int i = 0; i < size; i++)
        delete[] matrix[i];
    delete[] matrix;
}

int main() {
    string command;
    int** matrix = NULL;
    int size = 0;
    while (1) {
        get_command(command);
        if (command == "1") {
            get_size(size);
            matrix = gen_matrix(size);
        } else if (command == "2") {
            print_matrix(matrix, size);
        } else if (command == "3") {
            sort_matrix_row(matrix, size);
        } else if (command == "4") {
            save_matrix(matrix, size);
        } else if (command == "0") {
            free_matrix(matrix, size);
            cout << "Exit the program.." << endl;
            exit(104);
        } else {
            cout << "Wrong command" << endl << endl;
        }
    }

    return 0;
}