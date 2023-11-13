File I/O

What is the unistd symbolic constant for the standard input?
	STDIN_FILENO

What is the unistd symbolic constant for the standard output?
	STDOUT_FILENO

What is the unistd symbolic constant for the Standard error?
	STDERR_FILENO

What is the oflag used to open a file with the mode read only?
	O_RDONLY

What is the oflag used to open a file in mode read + write?
	O_RDWR

What is the correct combination of oflags used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?
	O_WRONLY | O_CREAT | O_APPEND

is open a function or a system call?
	it’s a function
	it’s a system call
	it’s a function provided by the kernel

What system call would you use to write to a file descriptor?
	write

Without context, on Ubuntu 14.04 LTS, write is a …
	executable
	system call

What is the return value of the system call open if it fails?
	-1

Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with open (if open succeeds of course):
	3

why? #AlwaysAskWhy
	Because most of the time, I will already have stdin (value 0), stdout (value 1) and stderr (value 2) opened when my program starts executing.

Which of these answers are the equivalent of O_RDWR on Ubuntu 14.04 LTS?

	2
	1 << 1
	3 & 2
	(O_WRONLY << 1)

What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?
	The text will be printed on the terminal on the standard output

When I am using O_WRONLY | O_CREAT | O_APPEND -> the | are bitwise operators.
	True
