/*
 * Author: Asqarjon Anvarov
 * Date: 16.11.2023
 * Name: Task 3
 */
// task_3.cpp
#include "task_3.h"

void rearrangeSoldiers(std::vector<int> &soldiers) {
  #include <iostream>
#include <vector>


void rearrangeSoldiers(std::vector<int> &soldiers) {
    int n = soldiers.size();

  
    for (int i = 0; i < n - 1; i += 2) {
      
        std::swap(soldiers[i], soldiers[i + 1]);
    }

  
    std::cout << "Rearranged soldiers: ";
    for (int soldier : soldiers) {
        std::cout << soldier << " ";
    }
    std::cout << "\n";
}

int main() {

    std::vector<int> soldiers = {1, 2, 3, 4, 5, 6, 7, 8};


    std::cout << "Original soldiers: ";
    for (int soldier : soldiers) {
        std::cout << soldier << " ";
    }
    std::cout << "\n";

   
    rearrangeSoldiers(soldiers);

    return 0;
}
}
