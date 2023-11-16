/*
 * Author: Asqarjon Anvarov
 * Date: 16.11.2023
 * Name: Task 4
 */
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int width, length;
    cout << "Enter width: "; cin >> width;
    cout << "Enter length: "; cin >> length;
    char color[width][length];
    for(int i = 0; i < width; i++){
        for(int j = 0; j < length; j++){
            cin >> color[i][j];
        }
    }
    for(int i = 0; i < width; i++){
        for(int j = 0; j < length; j++){
            if (color[i][j] == 'b'){
                SetConsoleTextAttribute(hConsole, 1);
                cout << "# ";
            }
            if (color[i][j] == 'w'){
                SetConsoleTextAttribute(hConsole, 7);
                cout << "# ";
            }
            if (color[i][j] == 'y'){
                SetConsoleTextAttribute(hConsole, 6);
                cout << "# ";
            }
        }cout << endl;
    }
    return 0;
}
