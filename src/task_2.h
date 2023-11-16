/*
 * Author: Asqarjon Anvarov
 * Date: 16.11.2023
 * Name: Task 2 
 */
#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    int length;
    cout << "Enter the number of coins and bankontes: "; cin >> length;
    int moneys[length], money_sorted[length];
    for(int i = 0; i < length; i++){
        cout << "Enter a denomination: "; cin >> moneys[i];
    }

    for (int i = 0; i < length; i++){
        int temp_min = INT_MAX, tempj;
        for (int j = 0; j < length; j++){
            if (moneys[j] < temp_min){
                temp_min = moneys[j];
                tempj = j;
            }
        }
        money_sorted[i] = temp_min;
        moneys[tempj] = INT_MAX;
    }
    for (int i = 0; i < length; i++){
        cout << money_sorted[i] << endl;
    }

    return 0;
}
