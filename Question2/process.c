#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed!\n");
        return 1;
    }

    if (pid == 0) {
        printf("Child Process Started. PID = %d\n", getpid());

        sleep(10);

        printf("Child Process Completed.\n");
        exit(0);
    }

    else {
        printf("Parent Process. PID = %d\n", getpid());

        sleep(3);

        printf("Child is taking too long. Sending SIGTERM...\n");
        kill(pid, SIGTERM);

        wait(NULL);

        printf("Zombie Process Prevented.\n");
    }

    return 0;
}