# Question 3 - File Processing using System Calls

## Objective
Create a file, write employee records, update a specific record without rewriting the complete file, and retrieve records efficiently using Linux system calls.

## Explanation

- `open()` creates and opens the file.
- `write()` stores employee records in the file.
- `lseek()` moves the file pointer directly to the required record for updating and reading.
- `read()` retrieves the required employee record.
- `close()` closes the file after all operations are completed.

## Result

The program successfully created a file, wrote employee records, updated the second record, retrieved it using `lseek()`, and displayed the updated information.