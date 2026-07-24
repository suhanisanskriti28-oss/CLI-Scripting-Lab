# Question 2 - Process Management using fork()

## Objective
Create a C program that creates a child process, monitors its execution, prevents zombie processes, and terminates an unresponsive child process using signals.

## Explanation

- `fork()` creates a child process from the parent process.
- The child process performs a task, while the parent monitors it.
- `sleep()` is used to simulate a long-running child process.
- `kill()` sends the SIGTERM signal to terminate an unresponsive child process.
- `wait()` makes the parent wait for the child to terminate, preventing zombie processes.

## Result

The program successfully created a child process, monitored its execution, terminated it using SIGTERM, and prevented zombie processes using `wait()`.
