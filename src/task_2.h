/*
 * Author: Asqarjon Anvarov
 * Date: 16.11.2023
 * Name: Task 2 
 */
#include <iostream>
#include <vector>


void selectionSort(std::vector<int> &arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        
    
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
      
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {

    std::vector<int> denominations = {26, 2,  60, 25, 9, 77, 18};

 
    std::cout << "Original denominations: ";
    for (int denomination : denominations) {
        std::cout << denomination << " ";
    }
    std::cout << "\n";


    selectionSort(denominations);

  
    std::cout << "Sorted denominations: ";
    for (int denomination : denominations) {
        std::cout << denomination << " ";
    }
    std::cout << "\n";

    return 0;
}
