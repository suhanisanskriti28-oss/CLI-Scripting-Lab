#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

struct Employee {
    int id;
    char name[20];
};

int main() {

    struct Employee emp;

    int fd = open("employee.dat", O_RDWR | O_CREAT | O_TRUNC, 0644);

    if (fd < 0) {
        printf("File could not be created.\n");
        return 1;
    }

    // Write Record 1
    emp.id = 101;
    strcpy(emp.name, "Alice");
    write(fd, &emp, sizeof(emp));

    // Write Record 2
    emp.id = 102;
    strcpy(emp.name, "Bob");
    write(fd, &emp, sizeof(emp));

    // Update second record
    lseek(fd, sizeof(struct Employee), SEEK_SET);

    emp.id = 102;
    strcpy(emp.name, "Charlie");

    write(fd, &emp, sizeof(emp));

    // Read second record
    lseek(fd, sizeof(struct Employee), SEEK_SET);

    read(fd, &emp, sizeof(emp));

    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);

    close(fd);

    return 0;
}