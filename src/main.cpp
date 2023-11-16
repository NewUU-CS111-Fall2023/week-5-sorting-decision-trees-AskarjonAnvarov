/*
 * Author:Asqarjon Anvarov
 * Date:16.11.2023
 * Name:
 */

// main.cpp
#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

int main() {
    std::cout << "Task 1" << std::endl;
    // Call functions or include code related to task 1 from task_1.h
    std::string books[5] = {"book1", "book5", "book3", "book4", "book2"};
    sorting(books, 5);
    for (int i = 0; i < 5; i++) {
        std::cout << books[i] << std::endl;
    }

    std::cout << "Task 2" << std::endl;
    // Call functions or include code related to task 2 from task_2.h
    task2_function();

    std::cout << "Task 3" << std::endl;
    // Call functions or include code related to task 3 from task_3.h
    std::vector<int> soldiers = {1, 2, 3, 4, 5, 6, 7, 8};
    rearrangeSoldiers(soldiers);

    std::cout << "Task 4" << std::endl;
    // Call functions or include code related to task 4 from task_4.h
    std::vector<int> array = {3, 1, 4, 6, 2, 5, 8};
    int result = countElementsMeetingCriteria(array);
    std::cout << "Count of elements where both neighbors are smaller: " << result << "\n";

    std::cout << "Task 5" << std::endl;
    // Call functions or include code related to task 5 from task_5.h
    task5_function();

    return 0;
}
