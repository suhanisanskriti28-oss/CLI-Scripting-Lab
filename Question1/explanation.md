# Question 1 - Duplicate Submission Detection

## Objective
Create a shell script to identify duplicate assignment submissions, back up unique files, and generate a report.

## Steps Performed
1. Created the required folders:
   - submissions
   - backup
   - screenshots

2. Created sample student submission files:
   - student1.txt
   - student2.txt
   - student3.txt (duplicate of student1.txt)

3. Wrote a shell script (`duplicate_check.sh`) that:
   - Calculates the checksum of each file using the `md5` command.
   - Detects duplicate files.
   - Copies only unique files into the `backup` folder.
   - Generates `report.txt` and `errors.log`.

4. Executed the script using:
   ```bash
   bash duplicate_check.sh
   ```

## Output
- Total Files Processed: 3
- Duplicate Files: 1
- Unique Files Backed Up: 2

## Result
The shell script successfully detected duplicate submissions, backed up only unique files, and generated the required report and error log.