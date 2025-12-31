# CPU Scheduling Simulator (C++)

This project is a terminal-based CPU scheduling simulator implemented in C++.  
It was developed to understand and compare how different CPU scheduling algorithms behave when applied to the same set of processes.

The program executes multiple scheduling algorithms in a single run and allows direct comparison of their execution order, waiting time, and turnaround time.

---

## Scheduling Algorithms

The following CPU scheduling algorithms are implemented:

- **FCFS (First Come First Serve - Non-Preemptive)**  
  Processes are executed strictly in the order in which they arrive.

- **SJF (Shortest Job First – Non-Preemptive)**  
  From the available processes, the one with the smallest burst time is selected and executed till completion.

- **SRTF (Shortest Remaining Time First – Preemptive)**  
  At every unit of time, the process with the shortest remaining burst time is chosen.  
  The currently running process can be preempted if a shorter job arrives.

- **Round Robin (Preemptive - Time Quantum = 2)**  
  Each process is given a fixed CPU time slice of 2 units.  
  If the process does not complete within this time, it is placed back into the ready queue.

All algorithms are executed on the same predefined process set for consistent comparison.

---

## Process Model

Each process is defined using:
- Process ID (PID)
- Arrival Time
- Burst Time

During scheduling, the simulator computes:
- Completion Time
- Turnaround Time
- Waiting Time

These values are calculated after a process finishes execution, following standard operating systems formulas.

---

## Scheduling Approach

- Non-preemptive algorithms execute a process continuously once selected.
- Preemptive algorithms are simulated one time unit at a time.
- Execution is tracked using a timeline to correctly represent context switches and preemption.
- Gantt charts are generated directly from the execution timeline to ensure accuracy.

This approach ensures correct visualization and metric calculation for all scheduling policies.

---

## Project Structure

# CPU Scheduling Simulator (C++)

This project is a terminal-based CPU scheduling simulator implemented in C++.  
It was developed to understand and compare how different CPU scheduling algorithms behave when applied to the same set of processes.

The program executes multiple scheduling algorithms in a single run and allows direct comparison of their execution order, waiting time, and turnaround time.

---

## Scheduling Algorithms

The following CPU scheduling algorithms are implemented:

- **FCFS (First Come First Serve)**  
  Processes are executed strictly in the order in which they arrive.

- **SJF (Shortest Job First – Non-Preemptive)**  
  From the available processes, the one with the smallest burst time is selected and executed till completion.

- **SRTF (Shortest Remaining Time First – Preemptive)**  
  At every unit of time, the process with the shortest remaining burst time is chosen.  
  The currently running process can be preempted if a shorter job arrives.

- **Round Robin (Time Quantum = 2)**  
  Each process is given a fixed CPU time slice of 2 units.  
  If the process does not complete within this time, it is placed back into the ready queue.

All algorithms are executed on the same predefined process set for consistent comparison.

---

## Process Model

Each process is defined using:
- Process ID (PID)
- Arrival Time
- Burst Time

During scheduling, the simulator computes:
- Completion Time
- Turnaround Time
- Waiting Time

These values are calculated after a process finishes execution, following standard operating systems formulas.

---

## Scheduling Approach

- Non-preemptive algorithms execute a process continuously once selected.
- Preemptive algorithms are simulated one time unit at a time.
- Execution is tracked using a timeline to correctly represent context switches and preemption.
- Gantt charts are generated directly from the execution timeline to ensure accuracy.

This approach ensures correct visualization and metric calculation for all scheduling policies.

---

## Project Structure

process-scheduler/
├── src/
│ ├── main.cpp // Program entry point
│ ├── scheduler.cpp // Scheduling algorithm implementations
│ ├── scheduler.h // Scheduler declarations
│ └── process.h // Process structure definition


---

## How to Compile and Run

From the project root directory:

```ubuntu terminal
g++ src/main.cpp src/scheduler.cpp -o scheduler
./scheduler

