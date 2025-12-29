#include <iostream>
#include <iomanip>
#include <algorithm>
#include "scheduler.h"
#include "process.h"
void printProcessTable(const std::vector<Process>& processes) {
    std::cout << "\nPID   AT   BT   CT   TAT   WT\n";

    for (const auto& p : processes) {
        std::cout << "P" << p.pid << "    "
                  << p.arrivalTime << "    "
                  << p.burstTime << "    "
                  << p.completionTime << "    "
                  << p.turnaroundTime << "     "
                  << p.waitingTime << "\n";
    }
}
void runFCFS(std::vector<Process>& processes) {
    std::cout << "\nFCFS Scheduling\n";
    std::cout << "---------------\n";

    std::sort(processes.begin(), processes.end(),
              [](const Process& a, const Process& b) {
                  return a.arrivalTime < b.arrivalTime;
              });
    int currentTime = 0;
    float totalWT = 0, totalTAT = 0;

    std::cout << "\nExecution Trace\n";

    for (auto& p : processes) {
        int startTime = std::max(currentTime, p.arrivalTime);
        int endTime = startTime + p.burstTime;

        std::cout << "Time " << startTime << " -> " << endTime
                  << " : P" << p.pid << "\n";

        p.completionTime = endTime;
        p.turnaroundTime = p.completionTime - p.arrivalTime;
        p.waitingTime = p.turnaroundTime - p.burstTime;

        totalWT += p.waitingTime;
        totalTAT += p.turnaroundTime;

        currentTime = endTime;
    }

    std::cout << "\nGantt Chart\n|";
    currentTime = 0;

    for (const auto& p : processes) {
        std::cout << "  P" << p.pid << "  |";
    }

    std::cout << "\n0";
    currentTime = 0;

    for (const auto& p : processes) {
        currentTime += p.burstTime;
        std::cout << std::setw(7) << currentTime;
    }

    std::cout << "\n";

    printProcessTable(processes);

    std::cout << "\nAverage Waiting Time    : "
              << totalWT / processes.size();
    std::cout << "\nAverage Turnaround Time : "
              << totalTAT / processes.size() << "\n";
}
