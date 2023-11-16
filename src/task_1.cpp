/*
 * Author: Asqarjon Anvarov
 * Date: 16.11.2023
 * Name: Task 1
 */
// task_1.cpp
#include "task_1.h"

void sorting(std::string catalog[], int num) {
   #include <iostream>

using namespace std;

void sorting(string catalog[], int num){
    for (int i = 0; i < num; i++){
        for(int j = i+1; j < 5; j++){
            if (catalog[i][0] > catalog[j][0]){
                swap(catalog[i], catalog[j]);
            }
            else if (catalog[i][0] == catalog[j][0]){
                for (int k = 0; k < num; k++){
                    if (catalog[i][k] > catalog[j][k]){
                        swap(catalog[i], catalog[j]);
                        break;
                    }
                }
            }
        }
    }
}

int main()
{
    int length;
    cout << "Enter number of books: "; cin >> length;
    cin.ignore();
    string books[length];
    for (int i = 0; i < length; i++){
        cout << "Enter a name of the book: ";
        getline(cin, books[i]);
    }
    sorting(books, length);
    for(int i = 0; i < 5; i++){
        cout << books[i] << endl;
    }
    return 0;
}
}

