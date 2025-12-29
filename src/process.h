#ifndef PROCESS_H
#define PROCESS_H

struct Process {
    int pid;
    int arrivalTime;
    int burstTime;

    int completionTime;
    int turnaroundTime;
    int waitingTime;
};

#endif
