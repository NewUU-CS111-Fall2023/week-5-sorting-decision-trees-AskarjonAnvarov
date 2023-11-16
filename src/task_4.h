/*
 * Author: Asqarjon Anvarov
 * Date: 16.11.2023
 * Name: Task 4
 */
#include <iostream>
#include <vector>


int countElementsMeetingCriteria(const std::vector<int>& arr) {
    int count = 0;
    int n = arr.size();

   
    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
           
            count++;
        }
    }

    return count;
}

int main() {
   
    std::vector<int> array = {3, 1, 4, 6, 2, 5, 8};

    std::cout << "Original array: ";
    for (int element : array) {
        std::cout << element << " ";
    }
    std::cout << "\n";

    int result = countElementsMeetingCriteria(array);

    std::cout << "Count of elements where both neighbors are smaller: " << result << "\n";

    return 0;
}
