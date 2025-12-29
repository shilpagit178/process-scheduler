#include <iostream>
#include <vector>
#include "process.h"
#include "scheduler.h"
int main() {
    std::cout << "CPU Scheduling Simulator\n";
    std::cout << "========================\n";

    std::vector<Process> processes = {
        {1, 0, 5, 0, 0, 0},
        {2, 1, 3, 0, 0, 0},
        {3, 2, 2, 0, 0, 0}
    };
    runFCFS(processes);
    return 0;
}
