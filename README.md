# CPU Scheduling Simulator (C++)

This project is a terminal-based CPU scheduling simulator implemented in C++.  
It is built to understand and compare how different CPU scheduling algorithms behave when applied to the same set of processes.

The program executes multiple scheduling algorithms in a single run so that their execution order, waiting time, and turnaround time can be compared directly.

## Scheduling Algorithms Implemented

The simulator implements the following CPU scheduling algorithms:

* **FCFS (First Come First Serve – Non-Preemptive)**  
  Processes are executed strictly in the order in which they arrive and are not interrupted once execution starts.

* **SJF (Shortest Job First – Non-Preemptive)**  
  From the available processes, the one with the smallest burst time is selected and executed until completion.

* **SRTF (Shortest Remaining Time First – Preemptive)**  
  At every time unit, the process with the shortest remaining burst time is chosen.  
  The currently running process may be preempted if a shorter job arrives.

* **Round Robin (Preemptive – Time Quantum = 2)**  
  Each process is given a fixed CPU time slice of 2 units.  
  If the process does not complete within this time, it is placed back into the ready queue.

All algorithms run on the same predefined process set to ensure consistent comparison.

## Process Model

Each process is defined using:
* Process ID (PID)
* Arrival Time
* Burst Time

During execution, the simulator computes:
* Completion Time (CT)
* Turnaround Time (TAT = CT − Arrival Time)
* Waiting Time (WT = TAT − Burst Time)

These values follow standard operating system definitions.

## Scheduling Approach

* Non-preemptive algorithms execute a process continuously once selected.
* Preemptive algorithms are simulated one time unit at a time.
* Execution is tracked using a timeline to correctly represent preemption and context switching.
* Gantt charts are generated directly from the execution timeline to preserve correct ordering and timing.

## Project Structure

```text
process-scheduler/
├── src/
│   ├── main.cpp
│   ├── scheduler.cpp
│   ├── scheduler.h
│   └── process.h
```

## How to Compile and Run

From the project root directory:

```ubuntu terminal
g++ src/main.cpp src/scheduler.cpp -o scheduler
./scheduler

