# Question 4 - Log Monitoring using Linux Commands

## Objective
Monitor a log file, extract ERROR messages, maintain a separate report file, and suppress unnecessary output.

## Explanation

- `tail -f` continuously monitors the log file and displays new entries in real time.
- `grep` filters only the ERROR messages.
- `>` redirects the filtered output into `error_report.txt`.
- Pipes (`|`) can be used to connect multiple commands efficiently.
- `/dev/null` is used to discard unwanted output when required.

## Result

The command pipeline successfully monitored the log file, extracted ERROR messages, created a separate report file, and demonstrated real-time log monitoring.