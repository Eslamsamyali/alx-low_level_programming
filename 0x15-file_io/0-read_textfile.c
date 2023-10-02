#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd; /* file descriptor */
char *buf; /* buffer to store the file content */
ssize_t n_read, n_write; /* number of bytes read and written */

/* check if filename is NULL */
if (filename == NULL)
return (0);

/* open the file for reading only */
fd = open(filename, O_RDONLY);
/* check if open failed */
if (fd == -1)
return (0);

/* allocate memory for the buffer */
buf = malloc(sizeof(char) * letters);
/* check if malloc failed */
if (buf == NULL)
return (0);

/* read from the file to the buffer */
n_read = read(fd, buf, letters);
/* check if read failed */
if (n_read == -1)
return (0);

/* close the file */
close(fd);

/* write from the buffer to the standard output */
n_write = write(STDOUT_FILENO, buf, n_read);
/* check if write failed or did not write the expected amount of bytes */
if (n_write == -1 || n_write != n_read)
return (0);

/* free the buffer */
free(buf);

/* return the number of bytes written */
return (n_write);
}
