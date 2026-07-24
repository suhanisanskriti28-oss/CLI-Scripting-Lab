# Question 5 - vi Editor Recovery Mechanism

## Objective
Explain how the vi editor helps recover unsaved work after a system crash.

## Recovery Mechanism

The vi editor automatically creates a temporary swap file while editing a document. If the system crashes unexpectedly, this swap file stores the unsaved changes.

The command:

```bash
vi -r filename
```

is used to recover the file from the swap file.

After recovery, the user can save the restored content using:

```bash
:w
```

and exit the editor using:

```bash
:q
```

or both together:

```bash
:wq
```

## Advantages

- Prevents loss of unsaved work.
- Allows recovery after unexpected crashes.
- Uses temporary swap files for recovery.
- Improves reliability while editing files.

## Result

The vi editor provides a recovery mechanism using swap files, allowing users to restore unsaved work after a system failure.