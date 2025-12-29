#ifndef SCHEDULER_H
#define SCHEDULER_H
#include <vector>
#include "process.h"

struct ExecutionSlice {
    int pid;
    int startTime;
    int endTime;
};
void printProcessTable(const std::vector<Process>& processes);
void runFCFS(std::vector<Process>& processes);
void runSJF(std::vector<Process>& processes);
void runSRTF(std::vector<Process>& processes);
#endif
